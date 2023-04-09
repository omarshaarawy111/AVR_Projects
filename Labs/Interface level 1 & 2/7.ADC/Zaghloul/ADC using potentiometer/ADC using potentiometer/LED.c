/*
 * LED.c
 *
 * Created: 2/9/2018 7:16:44 PM
 *  Author: Mohamed Zaghlol
 */ 
#include "DIO.h"
LED_vInit(char portname,char pinnumber)
{
DIO_vsetPINDir(portname,pinnumber,1);
}
LED_vturnon(char portname,char pinnumber)
{
DIO_write(portname,pinnumber,1);
}
LED_vturnoff(char portname,char pinnumber)
{
DIO_write(portname,pinnumber,0);
}
LED_vtoggle(char portname,char pinnumber)
{
DIO_toggle(portname,pinnumber);
}
