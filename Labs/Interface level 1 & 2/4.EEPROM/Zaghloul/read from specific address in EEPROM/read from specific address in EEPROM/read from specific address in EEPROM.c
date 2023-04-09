/*
 * read_from_specific_address_in_EEPROM.c
 *
 * Created: 8/24/2018 8:23:08 AM
 *  Author: Mohamed Zaghlol
 */ 

#include "EEPROM_driver.h"
#include "LED.h"
int main(void)
{
	LED_vInit('D',0);
	EEPROM_write(0x0030,0x50);
	if (EEPROM_read(0X0030)==0X50)
	{
		LED_vTurnOn('D',0);
	}
	else
	{
	LED_vTurnOff('D',0);
	}
    while(1)
    {
        
    }
}