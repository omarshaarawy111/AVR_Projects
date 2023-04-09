/*
 * buzzer.c
 *
 * Created: 18/05/2019 04:31:42 ص
 *  Author: hp-ht
 */ 
#include "dio.h"
void buzzerset(volatile unsigned char portname, volatile unsigned char pinnum){
	
	
	diosetpin(portname,pinnum,1);//set the buzzer direction
}
void buzzersound(unsigned char portname,unsigned char pinnum){
	diowritepin(portname,pinnum,1);//buzzer on
	
}
void buzzeroff(unsigned char portname,unsigned char pinnum){
	diowritepin(portname,pinnum,0);//buzzer off
}

