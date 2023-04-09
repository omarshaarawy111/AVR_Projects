/*
 * SPI.h
 *
 * Created: 14/12/2018 13:32:15
 *  Author: raef madin
 */ 


#ifndef SPI_H_
#define SPI_H_

#define F_CPU 8000000UL
#include "avr\io.h"
#include "util\delay.h"
#include "avr\interrupt.h"

#define SPI_DDR		DDRB
#define SPI_SS		4
#define SPI_MOSI	5
#define SPI_MISO	6
#define SPI_SCK		7

/****************************
function return type : void
init the master --> SPCR 
*****************************/
void init_master(void);
void sent_data_BLOCK(unsigned char data);

void init_slave(void);
/*
return data register of spi
*/
unsigned char recive_data(void);

#endif /* SPI_H_ */