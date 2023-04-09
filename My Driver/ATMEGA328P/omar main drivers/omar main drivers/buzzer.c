/*
 * buzzer.c
 *
 * Created: 18/05/2019 04:31:42 ص
 *  Author: hp-ht
 */ 
#include "dio.h"
void setbuzzer(portname,pinnum){
	
	
	diosetpin(portname,pinnum,1);
}
void buzzersound(portname,pinnum){
	diowritepin(portname,pinnum,1);
	
}

