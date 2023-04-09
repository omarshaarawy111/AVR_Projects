/*
 * SPIdriver.h
 *
 * Created: 12/14/2018 11:02:08 AM
 *  Author: hp
 */ 


#ifndef SPIDRIVER_H_
#define SPIDRIVER_H_
#define F_CPU 8000000UL

#include  "GPIO.h"
#include "util/delay.h"
#include"interrupt.h"

#define SPI_DDR DDRB /*·«“„  ⁄—›Â„ ·«‰Â„ „‘ „ ⁄—›Ì‰ ›Ì «·« „Ì·*/
#define SPI_SS   4
#define SPI_MOSI 5
#define SPI_MISO 6
#define SPI_SCK  7
/********************************
function and return type
init master , send data
*********************************/
void SPI_MasterInit(void)
void send_data(unsigned char )
/********************************
function for slave
inti without return datat types
*********************************/
void SPI_SlaveInit(void)
/********************************
recieve data of spi
*********************************/
char recieve_data(void)

#endif /* SPIDRIVER_H_ *