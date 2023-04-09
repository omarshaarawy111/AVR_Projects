/*
 * dio.h
 *
 * Created: 18/05/2019 02:16:17 ص
 *  Author: hp-ht
 */ 


#ifndef DIO_H_
#define DIO_H_
void  diosetpin(unsigned char portname ,unsigned char pinnum,unsigned char direction);
void  diowritepin(unsigned char portname ,unsigned char pinnum,unsigned char outputvalue);
unsigned char  dioreadpin(unsigned char portname ,unsigned char pinnum);
void  diotogglepin(unsigned char portname ,unsigned char pinnum);
void  diosetport(unsigned char portname ,unsigned char direction);
void  diowriteport(unsigned char portname ,unsigned char outputvalue);
unsigned char  dioreadport(unsigned char portname);
void pullupres(unsigned char portname,unsigned char pinnum);
void writehighnibbles(unsigned char portname ,unsigned char value);
void clearhighnibbles(unsigned char portname);












#endif /* DIO_H_ */