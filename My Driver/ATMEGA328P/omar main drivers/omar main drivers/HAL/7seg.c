/*
 * _7seg.c
 *
 * Created: 19/05/2019 02:12:21 ص
 *  Author: hp-ht
 */ 
#include "dio.h"
#include<util/delay.h>
void sevenset(unsigned char portname){
	diosetport(portname,0xff);//must put thedirection in diosetport =0xff instead of 1
}
void sevenwritenum(unsigned char portname,unsigned char number){
	unsigned char arr[]={0x3f,0x06,0x5b,0x4f,0x66,0x6d,0x7d,0x47,0x7f,0x6f};
	diowriteport(portname,arr[number]);
	}
unsigned char sevenwritefrom0to9(unsigned char portname){//here the data type of this function and thenext function will be unschar not void cuz op of seven segment like value
	
  unsigned char i;	
  unsigned char arr[]={0x3f,0x06,0x5b,0x4f,0x66,0x6d,0x7d,0x47,0x7f,0x6f};
	for (i=0;i<=9;i++){
			 diowriteport(portname,arr[i]);
			_delay_ms(1000);
		
			
		}
	

}	
unsigned char  sevenwriteform0to15(unsigned char portname){
	//data type must be unsigned char rether than void cuz op of 7segment is value 
	//u must have unique varname nd unique arrname cuz it is constant variables
	//if u want the same varname and thesame arrname like previous function u must write keyword const
	
	unsigned char v;
unsigned char arr1[]={0x3f,0x06,0x5b,0x4f,0x66,0x6d,0x7d,0x47,0x7f,0x6f,0x77,0x7f,0x39,0x3f,0x79,0x71};
for (v=0;v<=15;v++){
	diowriteport(portname,arr1[v]);
	_delay_ms(1000);
}	
	
	
}