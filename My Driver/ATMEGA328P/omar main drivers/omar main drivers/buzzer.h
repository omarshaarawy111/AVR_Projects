/*
 * buzzer.h
 *
 * Created: 18/05/2019 04:30:30 ص
 *  Author: hp-ht
 */ 


#ifndef BUZZER_H_
#define BUZZER_H_
void setbuzzer(volatile unsigned char portname, volatile unsigned char pinnum);
void buzzersound(unsigned char portname,unsigned char pinnum);




#endif /* BUZZER_H_ */