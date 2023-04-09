/*
 * std_macros.h
 *
 * Created: 18/05/2019 02:08:07 ص
 *  Author: hp-ht
 */ 


#ifndef STD_MACROS_H_
#define STD_MACROS_H_
#define REG_SIZE 8
#define SET_BIT(reg,bit) reg|=(1<<bit)
#define CLEAR_BIT(reg,bit) reg&=(~(1<<bit))
#define READ_BIT(reg,bit) (reg&(1<<bit))>>bit
#define TOGGLE_BIT(reg,bit) reg^=(1<<bit)
#define IS_BIT_SIT(reg,bit) (reg&(1<<bit))>>bit
#define IS_BIT_CLEAR(reg,bit) !((reg&(1<<bit))>>bit)
#define ROR(reg,num) reg=(reg<<(REG_SIZE-num))|(reg>>num))
#define ROL(reg,num) reg=(reg>>(REG_SIZE-num))|(reg<<num))




#endif /* STD_MACROS_H_ */