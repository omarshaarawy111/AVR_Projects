/*
 * LED.h
 *
 * Created: 2/9/2018 7:17:16 PM
 *  Author: Mohamed Zaghlol
 */ 


#ifndef LED_H_
#define LED_H_
#include "DIO.h"
LED_vInit(char portname,char pinnumber);
LED_vturnon(char portname,char pinnumber);
LED_vturnoff(char portname,char pinnumber);
LED_vtoggle(char portname,char pinnumber);

#endif /* LED_H_ */