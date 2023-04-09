/*
 * Dio_first_lab.c
 *
 * Created: 7/12/2018 3:35:21 PM
 *  Author: Mohamed Zaghlol
 */ 


#include <avr/io.h>
#include "DIO.h"
#define  F_CPU 8000000UL
#include <util/delay.h>
int main(void)
{
	DIO_set_port_direction('A',0xff);
    while(1)
    {
         DIO_write_port('A',0xff);
		 _delay_ms(1000);
		 DIO_write_port('A',0x00);
		 _delay_ms(1000);
    }
}