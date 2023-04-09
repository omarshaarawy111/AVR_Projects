/*
 * ADC.c
 *
 * Created: 03/06/2019 03:25:14 م
 *  Author: hp-ht
 */ 
#include "std_macros.h"
#include<avr/io.h>

void ADCinti(){
	//no need for ref voltage
	ADMUX=0x25;//put any channel you want from 0---->7
	setbit(ADCSRA,ADPS0);
	setbit(ADCSRA,ADPS1);
	setbit(ADCSRA,ADEN);
	
} 
void Adcread(){
	unsigned short read_val;
	
	setbit(ADCSRA,ADSC);
	while(isbitset(ADCSRA,ADIF));//stay in your position till ADIF become 1
	setbit(ADCSRA,ADIF); // clear ADIF
	read_val=(ADCL);
	read_val|=(ADCH<<8);
	return read_val ;
}