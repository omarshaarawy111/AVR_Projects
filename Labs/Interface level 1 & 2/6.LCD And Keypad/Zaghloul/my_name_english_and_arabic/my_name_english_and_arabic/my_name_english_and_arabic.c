/*
 * my_name_english_and_arabic.c
 *
 * Created: 9/15/2018 1:42:25 AM
 *  Author: Mohamed Zaghlol
 */ 


/*
 * lab5_lcd.c
 *
 * Created: 2/23/2018 4:33:31 PM
 *  Author: Mohamed Zaghlol
 */ 


#include <avr/io.h>
#include "LCD.h"

int main(void)
{
	
	LCD_vInit();
	LCD_vSend_string("Mohamed Zagloul ");
	LCD_vSend_cmd(64);
	LCD_vSend_char(0b00000000);//Õ—› «· „
	LCD_vSend_char(0b00000000);
	LCD_vSend_char(0b00000100);
	LCD_vSend_char(0b00001010);
	LCD_vSend_char(0b00010001);
	LCD_vSend_char(0b00001001);
	LCD_vSend_char(0b00000110);
	LCD_vSend_char(0b00000000);
	
	LCD_vSend_char(0b00010000); //Õ—› «· Õ
	LCD_vSend_char(0b00001000);
	LCD_vSend_char(0b00000100);
	LCD_vSend_char(0b00000010);
	LCD_vSend_char(0b00011111);
	LCD_vSend_char(0b00000000);
	LCD_vSend_char(0b00000000);
	LCD_vSend_char(0b00000000);

	LCD_vSend_char(0b00000000);//Õ—› «· œ
	LCD_vSend_char(0b00000000);
	LCD_vSend_char(0b00000001);
	LCD_vSend_char(0b00000001);
	LCD_vSend_char(0b00011111);
	LCD_vSend_char(0b00000000);
	LCD_vSend_char(0b00000000);
	LCD_vSend_char(0b00000000);
	
	LCD_vSend_char(0b00000000);//Õ—› «· “
	LCD_vSend_char(0b00000001);
	LCD_vSend_char(0b00000000);
	LCD_vSend_char(0b00000001);
	LCD_vSend_char(0b00000010);
	LCD_vSend_char(0b00000100);
	LCD_vSend_char(0b00001000);
	LCD_vSend_char(0b00010000);
	
	LCD_vSend_char(0b00000100);//Õ—› «· €
	LCD_vSend_char(0b00000000);
	LCD_vSend_char(0b00001111);
	LCD_vSend_char(0b00001000);
	LCD_vSend_char(0b00011111);
	LCD_vSend_char(0b00000000);
	LCD_vSend_char(0b00000000);
	LCD_vSend_char(0b00000000);
	
	LCD_vSend_char(0b00000001); //Õ—› «· · 
	LCD_vSend_char(0b00000001);
	LCD_vSend_char(0b00000001);
	LCD_vSend_char(0b00000001);
	LCD_vSend_char(0b00011111);
	LCD_vSend_char(0b00000000);
	LCD_vSend_char(0b00000000);
	LCD_vSend_char(0b00000000);

	LCD_vSend_char(0b00000000);//Õ—› «· Ê
	LCD_vSend_char(0b00000000);
	LCD_vSend_char(0b00000111);
	LCD_vSend_char(0b00000111);
	LCD_vSend_char(0b00000111);
	LCD_vSend_char(0b00000010);
	LCD_vSend_char(0b00000100);
	LCD_vSend_char(0b00001000);
	
	LCD_vSend_char(0b00000001); //Õ—› «· · ›Ï ‰Â«Ì… «·Ã„·…
	LCD_vSend_char(0b00000001);
	LCD_vSend_char(0b00010001);
	LCD_vSend_char(0b00010001);
	LCD_vSend_char(0b00011111);
	LCD_vSend_char(0b00000000);
	LCD_vSend_char(0b00000000);
	LCD_vSend_char(0b00000000);
	
	LCD_movecursor(2,16);
	LCD_vSend_char(0);
	LCD_movecursor(2,15);
	LCD_vSend_char(1);
	LCD_movecursor(2,14);
	LCD_vSend_char(0);
	LCD_movecursor(2,13);
	LCD_vSend_char(2);
	LCD_movecursor(2,12);
	LCD_vSend_char(32);
	LCD_movecursor(2,11);
    LCD_vSend_char(3);
	LCD_movecursor(2,10);
	LCD_vSend_char(4);
	LCD_movecursor(2,9);
	LCD_vSend_char(5);
	LCD_movecursor(2,8);
	LCD_vSend_char(6);
	LCD_movecursor(2,7);
	LCD_vSend_char(7);
	LCD_movecursor(2,6);
	
    while(1)
    {
				
	} 
	     
	return 0;
}
