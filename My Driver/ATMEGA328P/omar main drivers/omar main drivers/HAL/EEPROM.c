/*
 * EEPROM.c
 *
 * Created: 20/05/2019 01:47:50 ص
 *  Author: hp-
 
 */ 

#include<avr/io.h> //donot forget if u use registers in any place main or whatever u must declare librara avr/io.h
#include "std_macros.h" //donot forget this too
void EEPROwrite(unsigned short address,unsigned char data){
EEARL=(char)address;//setup address and make optimization so that if address lenght bigger than shot
EEARH=(char)(address>>8);
EEDR=data;//put data in data register
setbit(EECR,EEMPE);//configuration to write 
setbit(EECR,EEPE);//instead of w---->p in atmega328p
while (readbit(EECR,EEPE)==1);//wait till thecomplitation of writing	
}
unsigned char EEPROMread(const unsigned char address){
EEARL=(char)address;//setup address and make optimization so that if address lenght bigger than shot
EEARH=(char)(address>>8);
setbit(EECR,EERE);//configuration to read	
return EEDR;//return read data from eerd
}