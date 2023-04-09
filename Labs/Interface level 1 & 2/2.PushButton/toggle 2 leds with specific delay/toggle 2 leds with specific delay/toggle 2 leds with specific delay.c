/*
 * toggle_2_leds_with_specific_delay.c
 *
 * Created: 7/23/2018 4:16:25 PM
 *  Author: Mohamed Zaghlol
 */ 


#include <avr/io.h>
#include "LED.h"
#define F_CPU 8000000UL
#include <util/delay.h>
int main(void)
{
	LED_vInit('D',0);
    LED_vInit('D',1);
   while(1)
    {
       LED_vTurnOff('D',0);
	   LED_vTurnOff('D',1);
	   _delay_ms(1000);
	   LED_vToggle('D',0);
	   _delay_ms(1000);
	   LED_vToggle('D',0);
	   LED_vToggle('D',1);
	   _delay_ms(1000);
	   LED_vToggle('D',0);
	   _delay_ms(1000);
    }
}