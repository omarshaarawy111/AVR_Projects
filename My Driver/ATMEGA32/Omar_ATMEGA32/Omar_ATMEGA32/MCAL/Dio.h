/*
 * dio.h
 *
 * Created: 18/05/2019 02:16:17 ص
 *  Author: hp-ht
 */ 


#ifndef DIO_H_
#define DIO_H_
/*
Function Name        : DIO_vsetPINDir
Function Returns     : void
Function Arguments   : unsigned char portname,unsigned char pin number,unsigned char direction
Function Description : Set the direction of the given pin in the given port (direction 0 = input : 1 = output)
*/

void  DIO_vsetPINDir(unsigned char portname ,unsigned char pinnum,unsigned char direction);
/*
Function Name        : DIO_write
Function Returns     : void
Function Arguments   : unsigned char portname,unsigned char pin number,unsigned char outputvalue
Function Description : Set the value of the given pin in the given port (outputvalue 0 = low : 1 = high)
*/
void  DIO_write(unsigned char portname ,unsigned char pinnum,unsigned char outputvalue);
/*
Function Name        : DIO_u8read
Function Returns     : unsigned char
Function Arguments   : unsigned char portname,unsigned char pin number
Function Description : Returns 1 if the value of the given pin is high and zero if the value is low
*/

unsigned char  DIO_u8read(unsigned char portname ,unsigned char pinnum);
/*
Function Name        : DIO_toggle
Function Returns     : void
Function Arguments   : unsigned char portname,unsigned char pin number
Function Description : Reverse the value of the given pin in the given port.
*/

void  DIO_toggle(unsigned char portname ,unsigned char pinnum);
/*
Function Name        : DIO_set_port_direction
Function Returns     : void
Function Arguments   : unsigned char portname,unsigned char direction
Function Description : set the direction of whole port .
*/

void  DIO_set_port_direction(unsigned char portname ,unsigned char direction);
/*
Function Name        : DIO_write_port
Function Returns     : void
Function Arguments   : unsigned char portname,unsigned char port value
Function Description : Write the value to all port pins.
*/

void  DIO_write_port(unsigned char portname ,unsigned char outputvalue);
/*
Function Name        : DIO_read_port
Function Returns     : unsigned char
Function Arguments   : unsigned char portname
Function Description : read the value of the port .
*/

unsigned char  DIO_read_port(unsigned char portname);
/*
Function Name        : Pull_up_resistance
Function Returns     : void
Function Arguments   : unsigned char portname,unsigned char pin number
Function Description : read the value of the port .
*/
void Pull_up_resistance(unsigned char portname,unsigned char pinnum);
void writehighnibbles(unsigned char portname ,unsigned char value);
void clearhighnibbles(unsigned char portname);












#endif /* DIO_H_ */