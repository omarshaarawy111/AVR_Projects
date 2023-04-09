/*
 * USART.c
 *
 * Created: 24/09/2019 01:53:39 ص
 *  Author: hp-ht
 */ 
#include "USART.h"

void usartint(unsigned int ubrr){
UBRR0H=(unsigned char)(ubrr>>8);//set baud rate
UBRR0L=(unsigned char)(ubrr);
UCSR0B=(1<<RXEN0)|(1<<TXEN0);//control R , i set transmitter and receiver ,txen---->txen0,rexen---->rxen0,ucsrb---->ucsrb0
UCSR0C=(1<<USBS0)|(1<<UCSZ00)|(1<<UMSEL01);//set frame format (8bit data m2 bit stop bit), usbso---->usbs , ucsz01,0---->ucsz0 , umsel01,0---->ursel
}
void usarttrans(unsigned char data){
while(!(UCSR0A & (1<<UDRE0)));//wait till buffer end ,udre0---->udre--->eneable r for usart
UDR0 =data;	//usart i/o data r
}
unsigned char usartrec(void){
	while ((UCSR0A & (1<<RXC0)));//wait till the data is to be received, rxc0---->rxc
	return UDR0;
}