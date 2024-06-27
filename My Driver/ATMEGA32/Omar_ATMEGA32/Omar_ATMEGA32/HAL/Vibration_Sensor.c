/*
 * Vibration_Sensor.c
 *
 * Created: 19/11/2019 06:21:06 م
 *  Author: hp-ht
 */ 
#include "dio.h"
#include <avr/io.h>
#include <util/delay.h>
void Vibrate_Set(unsigned char portname,unsigned char pinnum){
	
	diosetpin(portname,pinnum,0);//any sensor is input
}
void Steps_info(unsigned int step_no){
	usartsendchar('s');
	usartsendchar('t');
	usartsendchar('e');
	usartsendchar('p');
	usartsendchar('s');
	usartsendchar(' ');
	usartsendchar('a');
	usartsendchar('r');
	usartsendchar('e');
	usartsendchar(' ');
	usartsendchar('=');
	usartsendnum(step_no);
	
}
