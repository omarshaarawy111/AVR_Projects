/*
 * Temperature_Sensor.c
 *
 * Created: 11/11/2019 03:11:33 م
 *  Author: hp-ht
 */ 
#include "Temperature_Sensor.h"
#include "LCD8bitsmode.h"
unsigned int Temperature_display1(int x){
	int temperatue;
	temperatue=((2*(x*0.25))-1);
	
	if(temperatue<10)
	{
		LCDmovecursor8(1,3);
		LCDchar8((temperatue%10)+48);
		
	}
	else if( temperatue<100)
	{
		LCDmovecursor8(1,3);
		LCDchar8((temperatue/10)+48);
		LCDchar8((temperatue%10)+48);
		
		
	}
	else if (temperatue >100)
	{
		LCDmovecursor8(1,3);
		LCDchar8((temperatue/10)+48);
		LCDchar8((temperatue%10)+48);
		
	}
	return temperatue;
}
