/*
 * ECG.c
 *
 * Created: 17/02/2020 06:28:21 ص
 *  Author: hp-ht
 */ 
 void ACG_read(unsigned short adcvalue){
	diosetpin('C',0,0);
	diosetpin('C',1,0);
	if ((dioreadpin('C',0)==1) ||(dioreadpin('C',1)==1) ){
	usartsendchar("!");	
		
	}
	else {
	    usartsendnum(adcvalue);
	}
	
}