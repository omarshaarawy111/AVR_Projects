/*
 * Keypad.c
 *
 * Created: 11/06/2019 08:15:08 م
 *  Author: hp-ht
 */ 
#include "dio.h"
void keypadint(){//i will always set keypad to  port d unlike LCD will be always set on port b
	//u must know that any Intialization is to determine the data direction
	//in  keypad there is special cases of switches ,there is output switches (outputs)(col) and input switches (inputs)(rows)
	//always pull up res is set for input switches (normal switches)
	diosetpin('D',0,1);
	diosetpin('D',1,1);
	diosetpin('D',2,1);
	diosetpin('D',3,1);
	diosetpin('D',4,0);
	diosetpin('D',5,0);
	diosetpin('D',6,0);
	diosetpin('D',7,0);
	pullupres('D',4);//enable pull up res
	pullupres('D',5);
	pullupres('D',6);
	pullupres('D',7);
}
char keypadcheckpress(){
	// all my dealing must be with normal / input switches 
	//if i find any read col =0 so there is must normal / input switch is pressed
char arr[4][4]={{'7','8','9','/'},{'4','5','6','*'},{'1','2','3','-'},{'A','0','=','+'}};
char row,col,x;	
char returnvalue=0;
for(row =0;row<4;row++){
//every time u will write outputs (col) and active pull up res for specific row
diowritepin('D',0,1);
diowritepin('D',1,1);
diowritepin('D',2,1);
diowritepin('D',3,1);
pullupres('D',row);//activate pull up res to the row u wanna press on---->u will check all col which col result 0 then i will know there is change happy if any col is equal zero---->u will determine which button is peressed

} 	
for(col =0 ;col<4 ;col++){
	x=dioreadpin('D',(col+4));
	if (x==0){
	returnvalue=arr[row][col];//u will return the pressed switch
	
	}	
}


return returnvalue;	
	
	
	
	
}