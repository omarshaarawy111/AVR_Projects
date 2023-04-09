/*
 * led.h
 *
 * Created: 18/05/2019 03:04:12 ص
 *  Author: hp-ht
 */ 


#ifndef LED_H_
#define LED_H_
void ledset(unsigned char portname,unsigned char pinnum);
void ledturnon(unsigned char portname ,unsigned char pinnum);
void ledturnoff(unsigned char portname ,unsigned char pinnum);
void ledtoggle (unsigned char portname , unsigned char pinnum);
unsigned char ledread(unsigned char portname,unsigned char pinnum);




#endif /* LED_H_ */