/*
 * LCD.h
 *
 * Created: 23/05/2019 12:22:00 ص
 *  Author: hp-ht
 */ 


#ifndef LCD_H_
#define LCD_H_
#include"dio.h"

#define clearscreen 0x01 //here i create marcos or bitwise but for LCD(it is & in theinstruction r when u call it it make specific command)
#define cursoron_displayon 0x0e
#define returnhome 0x02
#define EN 7 //here wether 4 modes or 8 modes they have the same configuration
#define Rs 4
#define Rw 3
#define eightbits 0x38
void LCDinti8(void);
static void fallingedge8(void);//here it is static cuz i wanna it to be shown just in this file
void LCDcmd8(char cmd);
//the using of it just in driver not in main but u can use it in main if u w
//(joker function) for configure  its mode,return home ,set cursor and clear thescreen . i can reach it through hash.may be value will be + or - so we need the declaration to be signed 
void LCDchar8(char date);//first char means char but second char means dtat type
void LCDstring8(char *data);//here the argument will be pointer cuz it is string wghich means array which means pointer
void LCDclearscreen8();
void LCDmovecursor8(char row,char coloumn);
void LCDsetpostion8(char row,char column,char*data);
#endif /* LCD_H_ */