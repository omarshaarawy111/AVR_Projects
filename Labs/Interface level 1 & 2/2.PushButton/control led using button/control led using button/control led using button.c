

#include <avr/io.h>
#include "LED.h"
#include "button.h"
#define F_CPU 8000000UL
#include <util/delay.h>
int main(void)
{
	
	LED_vInit('D',0);
	LED_vInit('D',1);
	LED_vInit('D',2);
	LED_vInit('D',3);
	LED_vInit('D',4);
	LED_vInit('D',5);
	LED_vInit('D',6);
	LED_vInit('D',7);
	
	
	
	
	
    while(1)
    {
       	      for (int i=1;i<=7;i++){		   LED_vTurnOn('D',i);
	   _delay_ms(100);}
	  
	   
    }
}
