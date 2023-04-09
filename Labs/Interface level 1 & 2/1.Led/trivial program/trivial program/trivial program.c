/*
 * trivial_program.c
 *
 * Created: 7/12/2018 7:22:41 PM
 *  Author: Mohamed Zaghlol
 */ 


#include <avr/io.h>
#define F_CPU 8000000UL
#include <util/delay.h>
int main(void)
{
	 DDRA|=(1<<0);
    while(1)
    {
       PORTA|=(1<<0);
		_delay_ms(1000);
	   PORTA=0x00;//PORTA&=(~(1<<0))
		 _delay_ms(1000);
    }
}