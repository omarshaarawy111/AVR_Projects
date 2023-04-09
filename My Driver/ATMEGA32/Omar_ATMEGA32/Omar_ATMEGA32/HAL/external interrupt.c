/*
 * external_interrupt.c
 *
 * Created: 08/11/2019 02:54:22 ص
 *  Author: hp-ht
 */ 
#include "external interrupt.h"
#include <avr/io.h>
void externalinterruptinit(){
	
	GICR |=(1<<INT0);//select which external pin will be trigged (INT0,INT1)
	MCUCR|=(1<<ISC00);//sense control
	
	
}