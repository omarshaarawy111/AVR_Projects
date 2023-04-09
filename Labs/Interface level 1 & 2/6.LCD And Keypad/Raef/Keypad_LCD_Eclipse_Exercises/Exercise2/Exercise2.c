/*
 * Exercise2.c
 * lcd with eight data line
 */ 

#include "lcd.h"

int main(void)
{
	LCD_init(); /* initialize LCD */
	LCD_displayStringRowColumn(0,2,"My LCD Driver");
	LCD_displayStringRowColumn(1,3,"Embedded WS");
	_delay_ms(4000); /* wait four seconds */

	LCD_clearScreen(); /* clear the LCD display */
	LCD_displayString("Interf. Course");
    LCD_displayStringRowColumn(1,5,"section");
	LCD_intgerToString(7);
	
    while(1)
    {
		/* Note: we write the code before while(1) because we want to execute it only once */
    }
	
}
