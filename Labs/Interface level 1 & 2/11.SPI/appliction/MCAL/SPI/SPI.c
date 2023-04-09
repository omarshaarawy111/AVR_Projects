/*
 * SPI.c
 *
 * Created: 14/12/2018 13:32:03
 *  Author: raef madin
 */ 

#include "SPI.h"
/****************************
function return type : void
init the master --> SPCR
*****************************/
void init_master(void){
	/*
	setting the output of SPI pins
	*/
	SPI_DDR |=((1<<SPI_SS)|(1<<SPI_SCK)|(1<<SPI_MOSI));
	/*
	SET BIT 4 TO BECOME A MSTER (MSTR)
	SET BIT 2 TO ENABLE THE SPI (SPE)
	*/
	SPCR = ((1<<SPE)|(1<<MSTR)|(1<<SPIE)); 
}
void sent_data_BLOCK(unsigned char data){
	SPDR = data;
	while (!(SPSR & (1<<SPIF))); // waiting 8 clocks
}

void init_slave(void){
	SPI_DDR = (1<<SPI_MISO);
	SPCR = (1<<SPE);
}
/*
return data register of spi
*/
unsigned char recive_data(void){
	while (!(SPSR & (1<<SPIF))); // waiting 8 clocks
	return SPDR;	
}