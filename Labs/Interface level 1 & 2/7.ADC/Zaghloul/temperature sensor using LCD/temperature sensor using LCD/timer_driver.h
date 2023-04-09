/*
 * timer_driver.h
 *
 * Created: 3/2/2018 4:45:10 PM
 *  Author: Mohamed Zaghlol
 */ 


#ifndef TIMER_DRIVER_H_
#define TIMER_DRIVER_H
#include <avr/io.h>
#include <avr/interrupt.h>
#include "std_macros.h"
void  timer_initializeCTC (void);
void  timer_initializefastpwm (void);
void change_dutycycle(double duty);

#endif /* TIMER_DRIVER_H_ */