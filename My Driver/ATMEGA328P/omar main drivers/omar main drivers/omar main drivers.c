/*
 * omar_main_drivers.c
 *
 * Created: 18/05/2019 02:06:53 ص
 *  Author: hp-ht
 */ 


#include<avr/io.h>
#include<util/delay.h>
#include<avr/interrupt.h>
#include "led.h"
#include "button.h"
#include "std_macros.h"
#include "dio.h"
#define F_CPU 8000000UL

//#include "GPIO/" another method to include any module u want by include gpio/module
//here also u must include the module u work on
//it can not accept EEPROM.h or 7seg.h  or lcd8bitsmode.h or lcd4bitsmode:)
//important notes :
//inti , directions and code u wanna run it for one time must be written before while 1
//code u wanna repeat it must be written after while 1
//any code belong to button must be written in while 1
//in interrupt there is one common r between atmega32 and atmega328p ----> SREG
//differences are GICR ---->EIMSKR,MCUCR---->EICRA,GIFR---->EIFR
//to choose the mode of int2 which exist in atmega32 >>>>mcucsr<<<<
//it is preferred in interrupt to simulate first
//in  ISR does not write the condition make u enter the ISR cause the parameter of ISR already equal this condition
//the best design in external interrupt is pull up with VCC power
//the best developer who write just one line in ISR
//if condition and it's bracket is seen as one current instruction so if any interrupt happen the program will instruct all if as one instruction and go to interrupt
//if condition = line code =instruction
//at every .c file write includes u need and please do not forget
//another method for that :write all u want in .h then include .h in .c but the previous method is the best and common used
//never write EEPROM function or any related pieces of code in while :by this u will write over and over cause while 1 mean looping
//if u need to interrupt EEPROM u must clear the bit of the interrupt at the end of ISR
//if the condition true or false is false complier perform the first (after if)
//in LCD u did not need to any configuration in main , u have all default configurations in your LCD drivers if u wanna change it change it from the driver (portB,c)
//i cannot put LCD in while 1 cause it contains ROM and it will be increased and that will cause over flow	or write string or char in for
//the command 0xc0 make u write on the second line Col one and 0xc1 make u write on second line Col two and so on
//the command 0x80 make u write on the first line col one and 0x81 make u write on second line col two and so on
//in a d c we out start conversion in while 1 if there is no interrupt on a d c
//to be more safe please include .h inside .c in case of they r not the same name but if they r the same name do not do that
//i prefer any includes to be inside .c
int main(void)
{
    
	
	
	
  
    while(1)
    { 
	 	
	}
}		
		

			
		
		
			
	
		

	
	
	
