/*
 * USART.h
 *
 * Created: 24/09/2019 01:50:08 ص
 *  Author: hp-ht
 */ 


#ifndef USART_H_
#define USART_H_
#include<avr/io.h>
#include<util/delay.h>
void usartint();
void usartsendchar(unsigned char data);//8bit data,send and receive byte
unsigned char usartrecchar(void);
void usartsendstring(const int *str);//send string
void usartreceivestring(int *str);//receive string
void usartsendnum(int x);//send number
#endif /* USART_H_ */