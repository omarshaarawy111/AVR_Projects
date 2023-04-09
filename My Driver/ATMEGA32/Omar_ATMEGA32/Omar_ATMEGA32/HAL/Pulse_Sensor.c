/*
 * Pulse_Sensor.c
 *
 * Created: 03/04/2020 09:37:47 م
 *  Author: hp-ht
 */ 
#include "Pulse_Sensor.h"
#include<stdbool.h>
	//values of pulse sensor
	unsigned int rate[10]; // array to hold last ten IBI values
	unsigned long sampleCounter = 0; // used to determine pulse timing
	unsigned long lastBeatTime = 0; // used to find IBI---->the time of last beat
	unsigned int Peak =512; // used to find peak in pulse wave,highest point in pulse wave
	unsigned int Trough = 512; // used to find trough in pulse wave,lowest point in pulse wave
	unsigned int thresh = 530; // used to find instant moment of heart beat,middle point in pulse wave
	unsigned int amp = 0; // used to hold amplitude of pulse waveform
	bool firstBeat=true; // used to seed rate array so we startup with reasonable BPM
	bool secondBeat=false; // used to seed rate array so we startup with reasonable BPM
	unsigned int pulsePin = 1; // Pulse Sensor purple wire connected to analog pin 1
	unsigned int runningTotal = 0; // clear the runningTotal variable
	// these variables are volatile because they are used during the interrupt service routine!
	unsigned int BPM; // used to hold the pulse rate from analog pin 1
	unsigned int Signal; // holds the incoming raw data
	unsigned int IBI = 600; // holds the time between beats, must be seeded!
	bool Pulse=FALSE ; // true when pulse wave is high, false when it's low
	bool QS=FALSE;
	unsigned int N_cnt;
	unsigned int i = 0;
void pulse_read(unsigned short adcvalue){
	Signal=adcvalue;//value of adc
	sampleCounter+=2;//keep track of time in ms in this variable
	N_cnt=sampleCounter-lastBeatTime;//monitor the time since last beat to avoid noise
	//_______________________________________________________________
	//first phase
	//find peak and trough
	if((Signal<thresh)&&(N_cnt>(IBI/5)*3)){
		//check adc must be smaller than threshold and n_cnt bigged than hold time between beats *3/5
		if(Signal<Trough) {
		//check signal smaller than trough then i have two conditions verified
		Trough=Signal;	//calculate  lowest point in pulse wave
		}
	}		
	if ((Signal>thresh)&&(Signal>Peak)){
	//check adc must be bigger than thresh and p_cnt	
	Peak=Signal; //calculate highest point in pulse wave
	}
	// NOW IT'S TIME TO LOOK FOR THE HEART BEAT
	// signal surges up in value every time there is a pulse
	//_______________________________________________________________
	//second phase
	//calculate heart beat
	if (N_cnt > 250){ // avoid high frequency noise
	if ( (Signal > thresh) && (Pulse == FALSE) && (N_cnt > (IBI/5)*3) ){
		Pulse = TRUE; // set the Pulse flag when we think there is a pulse
		IBI = sampleCounter - lastBeatTime; // measure time between beats in mS
		lastBeatTime = sampleCounter; // keep track of time for next pulse
	if(secondBeat==TRUE){ // if this is the second beat, if secondBeat == TRUE
	secondBeat = FALSE; // clear secondBeat flag
	for(i=0; i<=9; i++){ // seed the running total to get a realisitic BPM at startup
	rate[i] = IBI;
       }
         }
if(firstBeat==TRUE){ // if it's the first time we found a beat, if firstBeat == TRUE
firstBeat = FALSE; // clear firstBeat flag
secondBeat = TRUE; // set the second beat flag

return; // IBI value is unreliable so discard it
}
// keep a running total of the last 10 IBI values
runningTotal = 0; // clear the runningTotal variable

for(i=0; i<=8; i++){ // shift data in the rate array
rate[i] = rate[i+1]; // and drop the oldest IBI value
runningTotal += rate[i]; // add up the 9 oldest IBI values
}

rate[9] = IBI; // add the latest IBI to the rate array
runningTotal += rate[9]; // add the latest IBI to runningTotal
runningTotal /= 10; // average the last 10 IBI values
BPM = 60000/runningTotal; // how many beats can fit into a minute? that's BPM!
QS = TRUE; // set Quantified Self flag
// QS FLAG IS NOT CLEARED INSIDE THIS ISR
}
}
//_______________________________________________________________
//third phase
//edit the pulse vars
//after beating
if (Signal < thresh && Pulse == TRUE){ // when the values are going down, the beat is over

Pulse = FALSE; // reset the Pulse flag so we can do it again
amp = Peak - Trough; // get amplitude of the pulse wave
thresh = amp/2 + Trough; // set thresh at 50% of the amplitude
Peak = thresh; // reset these for next time
Trough = thresh;
}

if (N_cnt > 2500){ // if 2.5 seconds go by without a beat it means u remove the device
// we will set vars to their own default values	
thresh = 530; // set thresh default
Peak = 512; // set P default
Trough = 512; // set T default
//these three values of threash ,peak and trough = 512 that is mean they r Dc 
lastBeatTime = sampleCounter; // bring the lastBeatTime up to date the time of next pulse is not exist so we will make it equal the pre pulse timing
firstBeat = TRUE; // set these to avoid noise
secondBeat = FALSE; // when we get the heartbeat back
}
usartsendnum(BPM);
usartsendnum(runningTotal);
}