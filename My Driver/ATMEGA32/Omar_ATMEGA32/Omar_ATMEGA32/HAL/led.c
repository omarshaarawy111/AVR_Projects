/*
 * led.c
 *
 * Created: 18/05/2019 03:14:20 ص
 *  Author: hp-ht
 */ 

#include "dio.h"
void ledset(unsigned char portname,unsigned char pinnum){
	diosetpin(portname,pinnum,1);
}
void ledturnon(unsigned char portname ,unsigned char pinnum){
	
	diowritepin(portname,pinnum,1);
	
}
void ledturnoff(unsigned char portname ,unsigned char pinnum){
	
	diowritepin(portname,pinnum,0);
}
void ledtoggle (unsigned char portname , unsigned char pinnum){
	diotogglepin(portname,pinnum);
}
unsigned char ledread(unsigned char portname,unsigned char pinnum){
	int z;
	z=dioreadpin(portname,portname);//note: here dio has return value but it not effective cuz i call function in another function so i must create new return in thenew function
	return z;
}