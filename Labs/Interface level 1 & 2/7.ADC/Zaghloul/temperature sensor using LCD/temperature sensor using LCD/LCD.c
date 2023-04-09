/*
 * LCD.c
 *
 * Created: 2/23/2018 4:38:26 PM
 *  Author: Mohamed Zaghlol
 */ 
#include "LCD.h"

void LCD_vInit(void)
{
	#if defined eight_bits_mode
	DIO_vsetPINDir('A',0,1);
	DIO_vsetPINDir('A',1,1);
	DIO_vsetPINDir('A',2,1);
	DIO_vsetPINDir('A',3,1);
	DIO_vsetPINDir('A',4,1);
	DIO_vsetPINDir('A',5,1);
	DIO_vsetPINDir('A',6,1);
	DIO_vsetPINDir('A',7,1);
	DIO_vsetPINDir('B',EN,1);
	DIO_vsetPINDir('B',RW,1);
	DIO_vsetPINDir('B',RS,1);
	DIO_write('B',RW,0);
	LCD_vSend_cmd(0x38);
	LCD_vSend_cmd(0X01);
	LCD_vSend_cmd(0X0E);
	_delay_ms(10);
	#elif defined four_bits_mode
	DIO_vsetPINDir('D',4,1);
	DIO_vsetPINDir('D',5,1);
	DIO_vsetPINDir('D',6,1);
	DIO_vsetPINDir('D',7,1);
	DIO_vsetPINDir('B',EN,1);
	DIO_vsetPINDir('B',RW,1);
	DIO_vsetPINDir('B',RS,1);
	DIO_write('B',RW,0);
	LCD_vSend_cmd(0x02);
	LCD_vSend_cmd(0x28);
	LCD_vSend_cmd(0X01);
	LCD_vSend_cmd(0X0E);
	_delay_ms(10);
	#endif
}

static void send_falling_edge(void)
{
	DIO_write('B',EN,1);
	_delay_ms(2);
	DIO_write('B',EN,0);
	_delay_ms(2);
}
void LCD_vSend_cmd(char cmd)
{
	#if defined eight_bits_mode
	DIO_write_port('D',cmd);
	DIO_write('B',RS,0);
	send_falling_edge();
	
	#elif defined four_bits_mode
	clear_high_nibble('D',cmd);
	dio_write_highnibble('D',cmd&0xf0);
	DIO_write('B',RS,0);
	send_falling_edge();
	clear_high_nibble('D',cmd);
	dio_write_highnibble('D',cmd<<4);
	DIO_write('B',RS,0);
	send_falling_edge();
	#endif
	
}
void LCD_vSend_char(char data)
{
	#if defined eight_bits_mode
	DIO_write_port('D',data);
	DIO_write('B',RS,1);
	send_falling_edge();
	#elif defined four_bits_mode
	clear_high_nibble('D',data);
	dio_write_highnibble('D',data&0xf0);
	DIO_write('B',RS,1);
	send_falling_edge();
	clear_high_nibble('D',data);
	dio_write_highnibble('D',data<<4);
	DIO_write('B',RS,1);
	send_falling_edge();
	#endif
}

void LCD_vSend_string(char *data)
{
	while((*data)!='\0')
	{
		LCD_vSend_char(*data);
		data++;
	}
}

void LCD_clearscreen()
{
	LCD_vSend_cmd(0x01);
}
void LCD_movecursor(char row,char coloumn)
{
	char data ;
	if(row>2||row<1||coloumn>16||coloumn<1)
	{
		data=0x80;
	}
	if(row==1)
	{
		data=0x80+coloumn-1 ;
	}
	else if (row==2)
	{
		data=0xc0+coloumn-1;
	}
	
	
	LCD_vSend_cmd(data);
}