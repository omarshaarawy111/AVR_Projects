/*
 * use_of_volatile_keyword.c
 *
 * Created: 7/23/2018 10:39:17 AM
 *  Author: Mohamed Zaghlol
 */ 
#pragma optimize("",off)
#define F_CPU 8000000UL
#include <util/delay.h>
#define MY_DDRA *(( unsigned char *)(0x3A)) 
#define MY_PORTA *((  unsigned char *)(0x3B)) 
int main(void)
{
	MY_DDRA=0xff;
	
    while(1)
    {
      
	   MY_PORTA=0xff;
	   _delay_ms(1000);
	    MY_PORTA=0x00;
	    _delay_ms(1000);
	  
    }
}