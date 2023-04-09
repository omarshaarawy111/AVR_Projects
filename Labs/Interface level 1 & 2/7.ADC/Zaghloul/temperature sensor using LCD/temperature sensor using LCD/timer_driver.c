/*
 * timer_driver.c
 *
 * Created: 3/2/2018 4:44:59 PM
 *  Author: Mohamed Zaghlol
 */ 
#include "timer_driver.h"

void  timer_initializeCTC (void)
{
	
	
	//SET_BIT(TCCR0,WGM01);
	/*
	unsigned long x=8000;
	unsigned long z;
	z=x*tick;
	unsigned long y=1024;
	OCR0= (unsigned char)(z/y);
	*/
	OCR0= 78 ;
	SET_BIT(TCCR0,WGM01);
	CLR_BIT(TCCR0,WGM00);
	//SET_BIT(TCCR0,FOC0);
	//SET_BIT(TCCR0,COM01);
	//CLR_BIT(TCCR0,COM00);
	
	
	SET_BIT(TCCR0,CS00);
	CLR_BIT(TCCR0,CS01);
	SET_BIT(TCCR0,CS02);
	//sei();
	//SET_BIT(TIMSK,OCIE0);
	
	
}
void  timer_initializefastpwm (void)
{
	SET_BIT(TCCR0,WGM00); //adjust fast pulse width modulation mode
	SET_BIT(TCCR0,WGM01);
//	sei();
	SET_BIT(TCCR0,COM01); //adjust non inverting mode
	SET_BIT(TCCR0,COM00);
	OCR0=64;
	//SET_BIT(TIMSK,TOIE0);
	SET_BIT(TCCR0,CS00);//adjust clock
	CLR_BIT(TCCR0,CS01);
	SET_BIT(TCCR0,CS02);
}
void change_dutycycle(double duty)
{
	OCR0= (duty/100)*256 ;
}

