/*
 * Pulse_Sensor.h
 *
 * Created: 03/04/2020 09:36:45 م
 *  Author: hp-ht
 */ 


#ifndef PULSE_SENSOR_H_
#define PULSE_SENSOR_H_
#include<avr/io.h>
#include<util/delay.h>
#include<stdio.h>
#include<stdlib.h>
#include "dio.h"
#define TRUE 1
#define FALSE 0
void pulse_read(unsigned short adcvalue);
void pulse_intia();
#endif /* PULSE_SENSOR_H_ */