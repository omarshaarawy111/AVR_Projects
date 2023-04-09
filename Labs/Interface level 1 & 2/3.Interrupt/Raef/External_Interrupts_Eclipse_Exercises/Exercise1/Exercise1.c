/*
 * External Interrupt 0 (toggle the led)
 */ 

#include <avr/io.h>
#include <avr/interrupt.h>

/* External INT0 Interrupt Service Routine */
ISR(INT0_vect)
{
	PORTC = PORTC ^ (1<<0); //toggle led state
}

/* External INT0 enable and configuration function */

void INT1_Init(void)
{
	SREG  &= ~(1<<7);   // Disable interrupts by clearing I-bit
	DDRD  &= (~(1<<PD2));               // Configure INT0/PD2 as input pin
	GICR  |= (1<<6);                 // Enable external interrupt pin INT0
	MCUCR |= (1<<0) | (1<<1);   // Trigger INT0 with the raising edge
	SREG  |= (1<<7);                    // Enable interrupts by setting I-bit
}

int main(void)
{
	INT0_Init();              // Enable external INT0

	DDRC  = DDRC | (1<<PC0);  // Configure pin PC0 in PORTC as output pin
	PORTC = PORTC | (1<<PC0); // Initialization Led is off at the beginning(Negative Logic)
	
    while(1)
    {//pc
	}					
}
