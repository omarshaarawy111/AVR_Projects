/*
 * Omar_ATMEGA32.c
 *
 * Created: 27/09/2019 09:03:45 ص
 *  Author: Omar Sha'rawy
 */ 
#include<avr/io.h>
#include<util/delay.h>
#include<avr/interrupt.h>
#include<stdlib.h>
#include<stdio.h>
#include<string.h>
#include<stdbool.h>
#include "led.h"
#include "button.h"
#include "Std_macros.h"
#include "Dio.h"
#define F_CPU 8000000UL // this is my cpu clock when im using serial communication (usart)
int counter=0;
int main(void)
{  
	LCDinti8();
	/*9diosetpin('A',0,0); // pin to blink led at each beat
	usartint();
    sei();//enable interrupt generally
	ADCinti();*/
	while(1)
	{
      if(((PINA)&(1<<0)))==1){
		 counter++;
		 _delay_ms(100);
		 LCDsetpostion8(0,0,counter); 
		  
	  }
	  
	  
	}
	}
/*ISR(USART_RXC_vect){
	char symbol;
	symbol=UDR;
	if(symbol=='a'){
	ADCread_channel_ACG();//send char a then send Ecg will read
	_delay_ms(2);	
	}
	else if(symbol=='b'){
	 ADCread_channel_Pulse();//send char a then send pulse sensor will read
	 _delay_ms(2);	
	}
	
}*/