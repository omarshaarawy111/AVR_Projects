/*
 * EEPROM.h
 *
 * Created: 20/05/2019 01:46:31 ص
 *  Author: hp-ht
 */ 


#ifndef EEPROM_H_
#define EEPROM_H_
void EEPROwrite(unsigned short address,unsigned char);
unsigned char EEPROMread(const unsigned char address);//here we make it const so that i canot write while reading






#endif /* EEPROM_H_ */