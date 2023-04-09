/*
 * light_7_leds_then_dime_them_in_reverse_order.c
 *
 * Created: 7/23/2018 12:19:47 PM
 *  Author: Mohamed Zaghlol
 */ 


#include <avr/io.h>
#define F_CPU 8000000UL
#include <util/delay.h>
#include "LED.h"
#include "std_macros.h"
int main(void)
{
	DDRC =0X00;
	LED_vInit('D',0);
	LED_vInit('D',1);
	LED_vInit('D',2);
	LED_vInit('D',3);
	LED_vInit('D',4);
	LED_vInit('D',5);
	LED_vInit('D',6);
	LED_vInit('D',7);
	signed char i;
    while(1)
    {
		if(PINC ==1){
      for (i=0;i<=7;i++)
      {
		  LED_vTurnOn('D',i);
		  _delay_ms(1000);
      }
	  for (i=7;i>=0;i--)
	  {
		  LED_vTurnOff('D',i);
		  _delay_ms(1000);
	  }
		}	  
    }
	}	
