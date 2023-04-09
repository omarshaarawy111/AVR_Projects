/*
 * USART.c
 *
 * Created: 24/09/2019 01:53:39 ص
 *  Author: hp-ht
 */ 
#include "USART.h"
#include "dio.h"
void usartint(){//for intailisation and storing value of ubrr
UCSRB =(1<<TXEN)|(1<<RXEN)|(1<<RXCIE);//enable tran and rec and interrupt
UCSRC =(1<<UCSZ0)|(1<<UCSZ1);//enable 8bit data
UBRRH=51>>8;
UBRRL=(unsigned char )51;//for fosc=8MHZ and baudrate=9600*/
}
void usartsendchar(unsigned char data){
while(!(UCSRA & (1<<UDRE)));//wait till buffer end ,udre0---->udre--->eneable r for usart
UDR =data;	//usart i/o data r
}
unsigned char usartrecchar(void){
	while (!(UCSRA & (1<<RXC)));//wait till the data is to be received, rxc0---->rxc
	return UDR;
}
void usartsendstring(const int *str){
	int i;
	for (i=0;i<8;i++)
	{
		usartsendchar(str[i]);//send char by char
		
	}		
	
	
	
}
void usartreceivestring(int *str){
	int i=0;
	str[i]=usartrecchar();//receive char by char
	while(str[i] !='#'){
		i++;
		str[i]=usartrecchar();
	}
	str[i]='\0';//every char i send i erase
}
void usartsendnum(int x){
	
	char value [10];
	int i=0;
	do{
		value[i++]=(char)(x%10)+'0';
		x /=10;
		
	}
	while(x);
	while (i){
	usartsendchar(value[--i]);
	}	
}