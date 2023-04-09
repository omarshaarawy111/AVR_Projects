/*
 * the_safe.c
 *
 * Created: 9/20/2018 10:48:42 AM
 *  Author: Mohamed Zaghlol
 */ 


#include <avr/io.h>
#define  F_CPU 8000000UL
#include <util/delay.h>
#include "keypad_driver.h"
#include "LCD.h"
#define  EEPROM_STATUS_LOCATION 0x20
#define  EEPROM_PASSWORD_LOCATION1 0x21
#define  EEPROM_PASSWORD_LOCATION2 0x22
#define  EEPROM_PASSWORD_LOCATION3 0x23
#define  EEPROM_PASSWORD_LOCATION4 0x24
#define MAX_TRIES 2

char arr[4];
int main(void)
{
	char value=0xff;
	char flag=0;
	char tries=MAX_TRIES;
	keypad_vInit();
	LCD_vInit();
	if (EEPROM_read(EEPROM_STATUS_LOCATION)==0xff)
	{
	LCD_vSend_string("set pass:");
	do 
	{
		value=keypad_u8check_press();
	} while (value==0xff);
	LCD_vSend_char(value);
	_delay_ms(500);
	LCD_movecursor(1,10);
	LCD_vSend_char(0X2A);
	_delay_ms(500);
	EEPROM_write(EEPROM_PASSWORD_LOCATION1,value);
	value=0xff;
	
	do
	{
		value=keypad_u8check_press();
	} while (value==0xff);
	LCD_vSend_char(value);
	_delay_ms(500);
	LCD_movecursor(1,11);
	LCD_vSend_char(0X2A);
	_delay_ms(500);
	EEPROM_write(EEPROM_PASSWORD_LOCATION2,value);
	value=0xff;
	
	do
	{
		value=keypad_u8check_press();
	} while (value==0xff);
	LCD_vSend_char(value);
	_delay_ms(500);
	LCD_movecursor(1,12);
	LCD_vSend_char(0X2A);
	_delay_ms(500);
	EEPROM_write(EEPROM_PASSWORD_LOCATION3,value);
	value=0xff;
	
	do
	{
		value=keypad_u8check_press();
	} while (value==0xff);
	LCD_vSend_char(value);
	_delay_ms(500);
	LCD_movecursor(1,13);
	LCD_vSend_char(0X2A);
	_delay_ms(500);
	EEPROM_write(EEPROM_PASSWORD_LOCATION4,value);
	value=0xff;
	EEPROM_write(EEPROM_STATUS_LOCATION,0x00);
	}
				
    while(flag==0)
    {
		arr[0]=arr[1]=arr[2]=arr[3]=0xff;
		LCD_clearscreen();
		LCD_vSend_string("check pass:");
		do
		{
			arr[0]=keypad_u8check_press();
		} while (arr[0]==0xff);
		LCD_vSend_char(arr[0]);
		_delay_ms(500);
		LCD_movecursor(1,12);
		LCD_vSend_char(0X2A);
		_delay_ms(500);
		
		do
		{
			arr[1]=keypad_u8check_press();
		} while (arr[1]==0xff);
		LCD_vSend_char(arr[1]);
		_delay_ms(500);
		LCD_movecursor(1,13);
		LCD_vSend_char(0X2A);
		_delay_ms(500);
		
		do
		{
			arr[2]=keypad_u8check_press();
		} while (arr[2]==0xff);
		LCD_vSend_char(arr[2]);
		_delay_ms(500);
		LCD_movecursor(1,14);
		LCD_vSend_char(0X2A);
		_delay_ms(500);
		do
		{
			arr[3]=keypad_u8check_press();
		} while (arr[3]==0xff);
		LCD_vSend_char(arr[3]);
		_delay_ms(500);
		LCD_movecursor(1,15);
		LCD_vSend_char(0X2A);
		_delay_ms(500);
	if(EEPROM_read(EEPROM_PASSWORD_LOCATION1)==arr[0] &&  EEPROM_read(EEPROM_PASSWORD_LOCATION2)==arr[1] && EEPROM_read(EEPROM_PASSWORD_LOCATION3)==arr[2] && EEPROM_read(EEPROM_PASSWORD_LOCATION4)==arr[3])
	{
		LCD_clearscreen();
		LCD_vSend_string("right password");
		LCD_movecursor(2,1);
		LCD_vSend_string("safe opened");
		flag=1;
	}	
	else
	{
		tries=tries-1;
		if (tries>0)
		{
			LCD_clearscreen();
			LCD_vSend_string("wrong password");
			_delay_ms(1000);
			LCD_clearscreen();
			LCD_vSend_string("tries left:");
			LCD_vSend_char(tries+48);
			_delay_ms(1000);
			continue;
		}
		else
		{
			LCD_clearscreen();
			LCD_vSend_string("wrong password");
			LCD_movecursor(2,1);
			LCD_vSend_string("safe closed");
			break;
		}
	}
	}			
}