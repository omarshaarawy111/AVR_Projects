/*
 * ADC.c
 *
 * Created: 03/06/2019 03:25:14 م
 *  Author: hp-ht
 */ 
#include "std_macros.h"
#include<avr/io.h>

void ADCinti(void)
{
	
	setbit(ADMUX,REFS0); //configure VREF,u must configure vref---->0b0100 0000=0x40
	setbit(ADCSRA,ADEN); // ENable ADC
	/* adjust ADC clock*/
	setbit(ADCSRA,ADPS2);//always my division factor is 64,when thedivision factor is bigger it is better
	setbit(ADCSRA,ADPS1);
	
}
void ADCread_channel_ACG()
{
	unsigned short read_val;
	read_val=(ADCL);//right adjust
	read_val|=(ADCH<<8);
	setbit(ADCSRA,ADSC);//as we willnot make any interrupt we will set this bit at this function
	while(isbitset(ADCSRA,ADIF));//stay in your position till ADIF become 1
	setbit(ADCSRA,ADIF); // clear ADIF
	ADMUX=0x40;
	ACG_read(read_val);
	
}	
void ADCread_channel_Pulse(){
	unsigned short read_val;
	read_val=(ADCL);//right adjust
	read_val|=(ADCH<<8);
	setbit(ADCSRA,ADSC);//as we willnot make any interrupt we will set this bit at this function
	while(isbitset(ADCSRA,ADIF));//stay in your position till ADIF become 1
	setbit(ADCSRA,ADIF); // clear ADIF
	ADMUX=0x41;
	pulse_read(read_val);
	
}
