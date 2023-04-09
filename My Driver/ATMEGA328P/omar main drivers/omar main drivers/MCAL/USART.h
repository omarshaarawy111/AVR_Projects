/*
 * USART.h
 *
 * Created: 24/09/2019 01:50:08 ص
 *  Author: hp-ht
 */ 


#ifndef USART_H_
#define USART_H_
#include <avr/io.h>
#define FOSC 1843200 //clock speed
#define BAUD 9600 //baud rate
#define MYUBRR FOSC/16/BAUD-1
void usartint(unsigned int ubrr);
void usarttrans(unsigned char data);//8bit data
unsigned char usartrec(void);



#endif /* USART_H_ */