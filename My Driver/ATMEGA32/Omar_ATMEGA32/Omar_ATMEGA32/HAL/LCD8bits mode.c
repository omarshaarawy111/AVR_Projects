/*
 * LCD.c
 *
 * Created: 23/05/2019 12:36:59 ص
 *  Author: hp-ht
 */ 

#include "LCD8bitsmode.h"
#include "dio.h"
#include<util/delay.h>
void	LCDinti8(){//prepare all pins of LCD (set the direction for all required pins):data pins 0---->7 .en ,rw ,rs
 //all intial configuration for 8 bits modes---->directions
 //it is better to work on port b cause portc is reserved for a d c for any project you want in the future
diosetpin('B',0,1);//data pins	directions
diosetpin('B',1,1);
diosetpin('B',2,1);
diosetpin('B',3,1);
diosetpin('B',4,1);
diosetpin('B',5,1);
diosetpin('B',6,1);
diosetpin('B',7,1);
diosetpin('C',EN,1);// en rw rs directions
diosetpin('D',Rw,1);
diosetpin('D',Rs,1);
diowritepin('D',Rw,0);//start writing


LCDcmd8(eightbits);//configure 8bits mode through # = address /all these addresses exist in instruction r
_delay_ms(1);
LCDcmd8(returnhome);//after configuration back to home through#=address
_delay_ms(1);
LCDcmd8(cursoron_displayon);//configure cursor
_delay_ms(1);
LCDcmd8(clearscreen);//clear the screen
_delay_ms(10);
	
	
}
static void fallingedge8(){
diowritepin('C',EN,1);//this is falling edge i can acces it by enable pin first write one on it then writeb zero on it
_delay_ms(2);
diowritepin('C',EN,0);
_delay_ms(2);	
}
//pins like en rs rw  i set it on port generally and not specify specific pin , make it my specific pin
void LCDcmd8(char cmd ){//cmd means the command u send
	// we choiose the first mode
	
	diowriteport('B',cmd);//u write cmd at all port b
	diowritepin('D',Rs,0);//select insruction r
	fallingedge8();
	
}
void LCDchar8(char data){

	diowriteport('B',data);//u write cmd at all port b
	diowritepin('D',Rs,1);//select darta r
	fallingedge8();
	
}
void LCDstring8(char*data){
	while((*data)!='\0'){//Condition to make sure that i still send char by char in the string nd if i finish sending this pointer logically will bew zero
		LCDchar8(*data);
		data++;//so when i send char i move to thenext char
	}
}
void	LCDclearscreen8(){
	
LCDcmd8(clearscreen);//cmd = command function so any instruction or command will be solved by this instruction
}	
	
void LCDmovecursor8(char row,char coloumn){// we work on 2*16 lines lcd
	char data;//data here means the position opf the cursor
	if (row >2 || row <1 || coloumn > 16 || coloumn <1){
		//impossible cases here data (cursor)still on it is postion anmd it will appear at the beginning
		data=0x80;//data=address
		}
	else if (row==1){
		data=0x80+coloumn-1;
	}
	else if (row==2){
		data=0xc0+coloumn-1;//this is the & of the second row 
	}
	LCDcmd8(data);
}	
void LCDsetpostion8(char row,char coloumn,char* data){
	LCDmovecursor8(row,coloumn);
	LCDstring8(data);
	
}




	
