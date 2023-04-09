/*
 * Timers.c
 *
 * Created: 03/06/2019 03:33:43 م
 *  Author: hp-ht
 */ 
#include "std_macros.h"
#include<avr/io.h>
#include<avr/interrupt.h>
void timerintictc(){
	//SET_BIT(TCCR0,WGM01);
	/*
	unsigned long x=8000;
	unsigned long z;
	z=x*tick;
	unsigned long y=1024;
	OCR0= (unsigned char)(z/y);
	*/
	OCR1A= 78 ;
	setbit(TCCR0,WGM10);//instead of tccr0 ---->tccr1a
	setbit(TCCR0,WGM11);
	//SET_BIT(TCCR0,FOC0);
	//SET_BIT(TCCR0,COM01);
	//CLR_BIT(TCCR0,COM00);
	
	
	setbit(TCCR0,CS00);//for clock instead of tccr0 ---->tccr1b
	clearbit(TCCR0,CS01);
	setbit(TCCR0,CS02);
	//sei();
	//SET_BIT(TIMSK,OCIE0);
	//in case of interrupt
}
void timerintipwm(){
	
	setbit(TCCR0,WGM10); //adjust fast pulse width modulation mode,,instead of tccr0 ---->tccr1a
	setbit(TCCR0,WGM11);
	//	sei();
	setbit(TCCR0,COM1A1); //adjust non inverting mode,,instead of com 01---->com1a1
	setbit(TCCR0,COM1A0);  // isntead of com 00 ---->com1a0
	OCR1A=64;
	//SET_BIT(TIMSK,TOIE0);
	setbit(TCCR1B,CS00);//adjust clock
	clearbit(TCCR0,CS01);//for clock instead of tccr0 ---->tccr1b
	clearbit(TCCR0,CS02);
}
void timerchangedutycycle(double duty){
	OCR0= (duty/100)*256 ;
}
