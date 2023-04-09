/*
 * EEProm.c
 *  Created on: 12 Oct 2018
 *      Author: raef madin
 */



#include <avr/io.h>
void EEPROM_write(unsigned short address, unsigned char data )
{
	/*set up address register*/
	EEARL=(char)address;
	EEARH=(char)(address>>8);
	/*set up data register*/
	EEDR=data ;
	/*write logical one to EEMWE*/
	EECR|=(1<<EEMWE);
	/*start EEPROM write by setting EEWE*/
	EECR|=(1<<EEWE);
	/* wait for completion of write operation*/
	while((EECR &(1<<EEWE)>>EEWE)==1);

}
unsigned char EEPROM_read( unsigned short address )
{
	/*set up address register*/
	EEARL=(char)address;
	EEARH=(char)(address>>8);
	/*start EEPROM read by setting EERE*/
	EECR|=(1<<EERE);
	/*return data from data register*/
	return EEDR ;
}
