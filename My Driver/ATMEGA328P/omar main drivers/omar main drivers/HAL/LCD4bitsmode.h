/*
 * LCD4bitsmode.h
 *
 * Created: 23/05/2019 10:17:10 م
 *  Author: hp-ht
 */ 


#ifndef LCD4BITSMODE_H_
#define LCD4BITSMODE_H_
#include"dio.h"

#define clearscreen 0x01 //here i create marcos or bitwise but for LCD(it is & in theinstruction r when u call it it make specific command)
#define cursoron_displayon 0x0e
#define returnhome 0x02
#define EN 2 //here wether 4 modes or 8 modes they have the same configuration
#define Rs 4
#define Rw 3
#define fourbits 0x28
void LCDinti4(void);
static void fallingedge4(void);//here it is static cuz i wanna it to be shown just in this file
void LCDcmd4(char cmd);
//the using of it just in driver not in main but u can use it in main if u w
//(joker function) for configure  its mode,return home ,set cursor and clear thescreen . i can reach it through hash.may be value will be + or - so we need the declaration to be signed
void LCDchar4(char date);//first char means char but second char means dtat type
void LCDstring4(char *data);//here the argument will be pointer cuz it is string wghich means array which means pointer
void LCDclearscreen4();
void LCDmovecursor4(char row,char coloumn);
void LCDsetpostion4(char row,char column,char*data);




#endif /* LCD4BITSMODE_H_ */