/*
 * Pressure_Sensor.c
 *
 * Created: 08/12/2019 06:37:07 م
 *  Author: hp-ht
 */ 
unsigned int Pressure_display(int y){
	int pressure;
	pressure=(y*5.0)/1023;
	pressure=(pressure+0.475)/0.0475;
	if(pressure<10)
	{
		LCDmovecursor8(2,4);
		LCDchar8(pressure);
		
	}
	else if(pressure<100)
	{
		LCDmovecursor8(2,4);
		LCDchar8(pressure);
		
	}

	return (y-55);
	
	
}