/*
 * _7seg.h
 *
 * Created: 19/05/2019 02:09:43 ص
 *  Author: hp-ht
 */ 


#ifndef 7SEG_H_
#define 7SEG_H_
void sevenset(unsigned char portname);
void sevenwritenum(unsigned char portname,unsigned char number);
unsigned char  sevenwritefrom0to9(unsigned char portname);
unsigned char  sevenwriteform0to15(unsigned char portname);




#endif /* 7SEG_H_ */