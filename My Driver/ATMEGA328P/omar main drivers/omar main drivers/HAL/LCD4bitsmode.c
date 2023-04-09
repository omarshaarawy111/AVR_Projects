/*
 * LCD4bitsmode.c
 *
 * Created: 23/05/2019 10:18:59 م
 *  Author: hp-ht
 */ 
#include "LCD4bitsmode.h"
#include "dio.h"
#include<util/delay.h>
void LCDinti4(){
	
	diosetpin('B',4,1);//for data pins(start with lower pins)directions
	diosetpin('B',5,1);
	diosetpin('B',6,1);
	diosetpin('B',7,1);
	diosetpin('D',EN,1);//rs rw en directions
	diosetpin('D',Rw,1);
	diosetpin('D',Rs,1);
	diowritepin('D',Rw,0);//start writing

	LCDcmd4(fourbits);//configure 4bits mode through # = address /all these addresses exist in instruction r
	_delay_ms(1);
	LCDcmd4(returnhome);//after configuration back to home through#=address
	_delay_ms(1);
	LCDcmd4(cursoron_displayon);//configure cursor
	_delay_ms(1);
	LCDcmd4(clearscreen);//clear the screen
}
static void fallingedge4(){
	diowritepin('D',EN,1);//this is falling edge i can acces it by enable pin first write one on it then writeb zero on it
	_delay_ms(2);
	diowritepin('D',EN,0);
	_delay_ms(2);
}
void LCDcmd4(char cmd){
	clearhighnibbles('B');//clear the previous value on higher nibbles
	writehighnibbles('B',cmd & 0xf0);//write on the higher four bits cmd whatever it is
	diowritepin('D',Rs,0);
	fallingedge4();
	clearhighnibbles('B');
	writehighnibbles('B',cmd<<4);//i want to move the value form the higher bits to the lower bits which i work on
	diowritepin('D',Rs,0);
	fallingedge4();//every time you write nibb you mUst wrITe rs = 0 and falling edge
	//here rs always must be zero because i work on cmd which is instruction
	//u cannot write first at lower ,u must write at higher then move it to lower
	
}
void LCDchar4(char data){
	diowriteport('B',data);//u write cmd at all port b
	diowritepin('D',Rs,1);//select data r
	fallingedge4();
	
	
}
void LCDstring4(char*data){
	while((*data)!='\0'){//Condition to make sure that i still send char by char in the string nd if i finish sending this pointer logically will bew zero
	LCDchar4(*data);
	data++;//so when i send char i move to thenext char
}
}
void	LCDclearscreen4(){
	
	LCDcmd4(clearscreen);//cmd = command function so any instruction or command will be solved by this instruction
}
void LCDmovecursor4(char row,char coloumn){// we work on 2*16 lines lcd
char data;//data here means the position opf the cursor
if (row >2 || row <1 || coloumn > 16 || coloumn <1){
	//impossible cases here data (cursor)still on it is postion anmd it will not appear
	data=0x80;
}
else if (row==1){
	data=0x80+coloumn-1;
}
else if (row==2){
	data=0xc0+coloumn-1;//this is the & of the second row
}
LCDcmd4(data);
}	
void LCDsetpostion4(char row,char coloumn,char* data){
	LCDmovecursor4(row,coloumn);
	LCDstring4(data);
	
}