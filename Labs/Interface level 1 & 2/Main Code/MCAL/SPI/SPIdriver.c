/*
 * SPIdriver.c
 *
 * Created: 12/14/2018 11:01:25 AM
 *  Author: hp
 */ 
#include"SPIdriver.h"
/********************************
function and return type
init master , send data
*********************************/
ISR(STC_VECT){
	static i=0;
	send_data_8clock(arr[i]);
	i++
	/*^
      |
	  |
	  |
	  |	
	if we have an interrupt*/
}
void SPI_MasterInit(void){
	/* Set MOSI and SCK output, all others input */
	DDR_SPI = (1<<DD_MOSI)|(1<<DD_SCK);
	/* Enable SPI, Master, set clock rate fck/16 */
	SPCR = (1<<SPE)|(1<<MSTR)|(1<<SPR0);
}
void send_data(unsigned char ){
	
	/* Start transmission */
	SPDR = cData;
	/* Wait for transmission complete */
	while(!(SPSR & (1<<SPIF)))
	;
}
/********************************
function for slave
inti without return datat types
*********************************/
void SPI_MasterInit(void){
	
	
	
	/* Set MISO output, all others input */
	SPI_DDR = ((1<<SPI_SS)|(1<<SPI_SCK)|(1<<SPI_MOSI));
	/*SET bit 4 to become  master 
	i donot put |= to amke others =0 
	set bit 2 to enable spi*/
	/* Enable SPI */
	SPCR |= (1<<SPE) | (1<<MSTR);
	/*i put |= to save other ones*/
	
}
/********************************
return data to spi
*********************************/
void send_data_8clock(unsigned char data ){
	
	SPSR= data;
	while(!(SPSR & (1<<SPIF)))/*waiting 8 clocks till send data to master <-------if barckts in while 1 means we still send */
	
}
void SPI_SlaveInit(void){
		SPI_DDR=(1<<SPI_MISO);
		SPCR=(1<<SPE);
		
		
		
	}
char recieve_data(void){
/* Wait for reception complete */
while(!(SPSR & (1<<SPIF)));
/* Return data register */
return SPDR;
}
	
	
}



