

#include <avr/io.h>
#include <util/delay.h>
#include <avr/interrupt.h>

unsigned char g_Interrupt_Flag = 0;

/* External INT1 Interrupt Service Routine */
ISR(INT1_vect)
{
	g_Interrupt_Flag = 1;
}

/* External INT1 enable and configuration function */

void INT2_Init(void)
{
	SREG  &= ~(1<<7);      // Disable interrupts by clearing I-bit
	DDRB  &= (~(1<<PB2));  // Configure INT1/PD3 as input pin
	PORTB |= (1<<PB2);     // Enable the internal pull up resistor at PD3 pin
	GICR  |= (1<<INT2);    // Enable external interrupt pin INT1
	MCUCSR &=~(1<<6);
	SREG  |= (1<<7);       // Enable interrupts by setting I-bit
}

int main(void)
{
	INT1_Init();           // Enable and configure external INT1

	DDRC  = 0xFF;          // Configure all PORTC pins as output pins
	PORTC = 0x01;          // First led is on at the beginning (Positive Logic configuration)

    while(1)
    {
		if(g_Interrupt_Flag == 0)
		{
			_delay_ms(500);
			PORTC = (PORTC<<1); //every time only one led is ON
			if(PORTC == 0x00)
			{
				PORTC = 0x01;
			}
		}
		else if(g_Interrupt_Flag == 1)
		{
			for(int i = 0 ; i < 5 ; i++)
			{
				PORTC = 0xFF;
				_delay_ms(500);
				PORTC = 0x00;
				_delay_ms(500);
			}
			g_Interrupt_Flag = 0; //after finish make flag = 0 again
		}
	}
}
