/*
 * button.c
 *
 * Created: 18/05/2019 03:39:06 ص
 *  Author: hp-ht
 */ 
#include "dio.h"

void buttonset(unsigned char portname,unsigned char pinnumber)
{
	diosetpin(portname,pinnumber,0);
}
unsigned char buttonread(unsigned char portname,unsigned char pinnumber)
{
	unsigned char a;
	a=dioreadpin(portname,pinnumber);
	return a ;
}