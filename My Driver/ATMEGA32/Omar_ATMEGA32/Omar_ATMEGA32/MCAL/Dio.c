/*
 * dio.c
 *
 * Created: 18/05/2019 02:22:29 ص
 *  Author: hp-ht
 */ 
#include<avr/io.h>
#include "Std_macros.h"
#include "Dio.h"
void  DIO_vsetPINDir(unsigned char portname ,unsigned char pinnum,unsigned char direction){
	switch(portname)
	{
		case'A':
		if (direction == 1 ){
			SET_BIT(DDRA,pinnum);
		}
		else{
			CLEAR_BIT(DDRA,pinnum);
		}
		break;
		case'B':
		if (direction == 1 ){
			SET_BIT(DDRB,pinnum);
		}
		else{
			CLEAR_BIT(DDRB,pinnum);
		}
		break;
		case'C':
		if (direction ==1 ){
			SET_BIT(DDRC,pinnum);
		}
		else{
		CLEAR_BIT(DDRC,pinnum);}
		break;
		case'D':
		if (direction ==1 ){
			SET_BIT(DDRD,pinnum);
		}
		else{
			CLEAR_BIT(DDRD,pinnum);
		}
		break;
		default:
	    break;
	}
}
void  DIO_write(unsigned char portname ,unsigned char pinnum,unsigned char outputvalue){
	switch(portname)
	{
		case'A':
		if (outputvalue == 1 ){
			SET_BIT(PORTA,pinnum);
		}
		else{
			CLEAR_BIT(PORTA,pinnum);	
		}
		break;
		case'B':
		if (outputvalue == 1 ){
			SET_BIT(PORTB,pinnum);
		}
		else{
			CLEAR_BIT(PORTB,pinnum);
		}
		break;
		case'C':
		if (outputvalue ==1 ){
		SET_BIT(PORTC,pinnum);
		}
		else{
		CLEAR_BIT(PORTC,pinnum);}
		break;
		case'D':
		if (outputvalue ==1 ){
			SET_BIT(PORTD,pinnum);
		}
		else{
			CLEAR_BIT(PORTD,pinnum);
		}
		break;
		default:
		break;
	}
}
unsigned char  DIO_u8read(unsigned char portname ,unsigned char pinnum){
	int x=0;
	switch(portname){
		case'A':
		x=READ_BIT(PINA,pinnum);
		break;
		case'B':
		x=READ_BIT(PINB,pinnum);
		break;
		case'C':
		x=READ_BIT(PINC,pinnum);
		break;
		case'D':
		x=READ_BIT(PIND,pinnum);
		break;
		default:
		break;
	}
	return x;
}
void  DIO_toggle(unsigned char portname ,unsigned char pinnum){
	switch(portname){
		case'A':
		TOGGLE_BIT(PORTA,pinnum);
		break;
		case'B':
		TOGGLE_BIT(PORTB,pinnum);
		break;
		case'C':
		TOGGLE_BIT(PORTC,pinnum);
		break;
		case'D':
		TOGGLE_BIT(PORTD,pinnum);
		break;
		default:
		break;	
	}
}
void  DIO_set_port_direction(unsigned char portname ,unsigned char direction){
	switch(portname)
	{
		case'A':
		DDRA=direction;
		break;
		case'B':
		DDRB=direction;
		break;
		case'C':
		DDRB=direction;
		break;
		case'D':
		DDRD=direction;
		break;
		default:
		break;
	}			
}
void  DIO_write_port(unsigned char portname ,unsigned char outputvalue){
	switch(portname)
	{
		case'A':
		PORTA=outputvalue;
		break;
		case'B':
		PORTB=outputvalue;
		break;
		case'C':
		PORTC=outputvalue;
		break;
		case'D':
		PORTD=outputvalue;
		break;
		default:
		break;
	}		
	}
unsigned char  DIO_read_port(unsigned char portname ){
	int x=0;
	switch(portname)
	{
		case'A':
		x=PINA;
		break;
		case'B':
		x=PINB;
		break;
		case'C':
	    x=PINC;
		break;
		case'D':
		x=PIND;
		break;
		default:
		break;	
	}
	return x;			
	}
void Pull_up_resistance(unsigned char portname,unsigned char pinnum){
	switch(portname){
		case 'A':
		SET_BIT(PORTA,pinnum);
		break;
		case 'B':
		SET_BIT(PORTB,pinnum);//we can reach this internal pull up resistor by accessing SFIOR in bit PUD and write 0 on it
		break;
		case 'c':
		SET_BIT(PORTC,pinnum);
		break;
		case 'D':
		SET_BIT(PORTD,pinnum);
		break;
		default:
		break;
	}
}	
void writehighnibbles(unsigned char portname ,unsigned char value){
	switch (portname) {
		case 'A':
		PORTA|=(value);
		break;
		case 'B':
		PORTB|=(value);//here | is just masking to save old values at port u can make it portx=(value)
		break;
		case 'C':
		PORTC|=(value);
		break;
		case 'D':
		PORTD|=(value);
		break;
		default:
		break;
		
		
		
	}

	
}
void clearhighnibbles(unsigned char portname){
	switch (portname){
		case 'B':
		PORTB&=0x0f;//read the value on first four bits
		break;
		case 'C':
		PORTC&=0x0f;//read the value on first four bits
		break;
		case 'D':
		PORTD&=0x0f;//read the value on first four bits
		break;
		default:
		break;
		
		
		
		
	}
	
	
	







}