/*
 * std_macros.h
 *
 * Created: 18/05/2019 02:08:07 ص
 *  Author: hp-ht
 */ 


#ifndef STD_MACROS_H_
#define STD_MACROS_H_
#define REG_SIZE 8
#define setbit(reg,bit) reg|=(1<<bit)
#define clearbit(reg,bit) reg&=(~(1<<bit))
#define readbit(reg,bit) (reg&(1<<bit))>>bit
#define togglebit(reg,bit) reg^=(1<<bit)
#define isbitset(reg,bit) (reg&(1<<bit))>>bit
#define isbitclear(reg,bit) !((reg&(1<<bit))>>bit)
#define ror(reg,num) reg=(reg<<(REG_SIZE-num))|(reg>>num))
#define rol(reg,num) reg=(reg>>(REG_SIZE-num))|(reg<<num))




#endif /* STD_MACROS_H_ */