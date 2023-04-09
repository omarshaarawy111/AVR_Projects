/*
 * button.h
 *
 * Created: 18/05/2019 03:37:07 ص
 *  Author: hp-ht
 */ 


#ifndef BUTTON_H_
#define BUTTON_H_
void buttonset(unsigned char portname,unsigned char pinnumber);

unsigned char buttonread(unsigned char portname,unsigned char pinnumber);

#endif /* BUTTON_H_ */