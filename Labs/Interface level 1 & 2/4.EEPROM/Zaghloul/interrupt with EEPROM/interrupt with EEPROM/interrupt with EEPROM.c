/*
 * interrupt_with_EEPROM.c
 *
 * Created: 8/24/2018 10:11:29 AM
 *  Author: Mohamed Zaghlol
 */ 

#include "EEPROM_driver.h"
#include "LED.h"
#include <avr/interrupt.h>
#define F_CPU 8000000UL
#include <util/delay.h>
#include "std_macros.h"
int main(void)
{
	LED_vInit('D',0);
	sei();
	SET_BIT(EECR,EERIE);
	EEPROM_write(0X0030,0X50);
	
    while(1)
    {
		LED_vTurnOff('D',0);
    }
}

ISR(EE_RDY_vect)
{
	LED_vTurnOn('D',0);
	_delay_ms(2000);
	CLR_BIT(EECR,EERIE);
}