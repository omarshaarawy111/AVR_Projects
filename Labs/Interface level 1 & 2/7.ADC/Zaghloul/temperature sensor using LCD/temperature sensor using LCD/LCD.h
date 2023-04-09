/*
 * LCD.h
 *
 * Created: 2/23/2018 4:36:45 PM
 *  Author: Mohamed Zaghlol
 */ 

#ifndef LCD_H_
#define LCD_H_

#include "DIO.h"
#include "LCD_config.h"
#if defined four_bits_mode
#define EN 3
#define RS 1
#define RW 2
#elif defined eight_bits_mode
#define EN 0
#define RS 1
#define RW 2
#endif
void LCD_vInit(void);
static void send_falling_edge(void);
void LCD_vSend_cmd(char cmd);
void LCD_vSend_char(char data);
void LCD_vSend_string(char *data);
void LCD_clearscreen();
void LCD_movecursor(char row,char coloumn);

#endif /* LCD_H_ */