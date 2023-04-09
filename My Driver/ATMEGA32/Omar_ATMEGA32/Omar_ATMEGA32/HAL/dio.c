/*
 * dio.c
 *
 * Created: 18/05/2019 02:22:29 ص
 *  Author: hp-ht
 */ 
#include<avr/io.h>
#include "std_macros.h"
#include "dio.h"
void pullupres(unsigned char portname,unsigned char pinnum){
	switch(portname){
		case 'B':
		setbit(PORTB,pinnum);
		break;
		case 'c':
		setbit(PORTC,pinnum);
		break;
		case 'D':
		setbit(PORTD,pinnum);
		break;
		default:
		break;
		
		
	}
	
	
}
void  diowritepin(unsigned char portname ,unsigned char pinnum,unsigned char outputvalue){
	switch(portname)
	{
		case'B':
		
		if (outputvalue == 1 ){
		setbit(PORTB,pinnum);
		}		
		else{
			clearbit(PORTB,pinnum);
		
		}				
			break;	
		case'C':
		if (outputvalue ==1 ){
		    setbit(PORTC,pinnum);
		}		
		else{
			clearbit(PORTC,pinnum);}				
		break;
		case'D':
		if (outputvalue ==1 ){
		setbit(PORTD,pinnum);
		}		
		else{
			clearbit(PORTD,pinnum);
		
		}				
		break;	
		default:
		break;	
				}
				}



void  diosetpin(unsigned char portname ,unsigned char pinnum,unsigned char direction){
	switch(portname)
	{
		case'B':
		
		if (direction == 1 ){
			setbit(DDRB,pinnum);
		}
		else{
			clearbit(DDRB,pinnum);
			
		}
		break;
		case'C':
		if (direction ==1 ){
			setbit(DDRC,pinnum);
		}
		else{
		clearbit(DDRC,pinnum);}
		break;
		case'D':
		if (direction ==1 ){
			setbit(DDRD,pinnum);
		}
		else{
			clearbit(DDRD,pinnum);
			
		}
		break;
		default:
		break;
	}
}				

unsigned char  dioreadpin(unsigned char portname ,unsigned char pinnum){
	int x=0;
	switch(portname){
		case'B':
		x=readbit(PINB,pinnum);
		break;
case'C':
x=readbit(PINC,pinnum);
break;		
case'D':
x=readbit(PIND,pinnum);
break;		
default:
break;		
	}
	return x;
	
	
}

void  diotogglepin(unsigned char portname ,unsigned char pinnum){
	
	switch(portname){
		case'B':
		togglebit(PORTB,pinnum);
		break;
		case'C':
		togglebit(PORTC,pinnum);
		break;
		case'D':
		togglebit(PORTD,pinnum);
		break;
		default:
		break;
		
		
	}
	
	
}





void  diosetport(unsigned char portname ,unsigned char direction){
	switch(portname)
	{
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
void  diowriteport(unsigned char portname ,unsigned char outputvalue){
	switch(portname)
	{
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




unsigned char  dioreadport(unsigned char portname ){
	int y=0;
	switch(portname)
	{
		case'B':
		y=PINB;
		break;
		case'C':
	    y=PINC;
		break;
		case'D':
		y=PIND;
		break;
		default:
		break;
		
	}
	return y;		
		
	}

void writehighnibbles(unsigned char portname ,unsigned char value){
switch (portname) {
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