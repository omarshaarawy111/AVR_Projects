/*
 * WriteToEEprom.c
 *
 *  Created on: 10 Oct 2018
 *      Author: raef madin
 */


#include "EEprom.h"
#include <avr/io.h>
int main(void)
{
  DDRD|=(1<<0)|(1<<1);
  PORTD&=~((1<<0)|(1<<1));
  EEPROM_write(0x0030,0x50);

	if (EEPROM_read(0X0030)==0X50)
	{
		PORTD|=(1<<0);
	}
	else if(EEPROM_read(0X0030)==0x51)
	{
		PORTD|=(1<<1);

	}
	else
	{
		  PORTD&=~((1<<0)|(1<<1));

	}
    while(1)
    {

    }
}
