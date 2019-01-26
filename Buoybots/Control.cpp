/*
 * Control.cpp
 *
 *  Created on: Jan 16, 2019
 *      Author: shloksobti
 */

#include "Control.h"
#include "Arduino.h"

Control::Control() {

}

double Control::getAttitude(double filteredValue1, double filteredValue2){

	double attitude = filteredValue1 - filteredValue2;
	return attitude;
}

double Control::getDepth(double filteredValue1, double filteredValue2){
	double depth = (filteredValue1 + filteredValue2)/2;
	return depth;
}

void Control::inflate(int cellsInflate[]){
	for (int i=0; i < sizeof(cellsInflate)/sizeof(cellsInflate[0]); i++){
	    digitalWrite(cellsInflate[i], HIGH);
	}
}

void Control::deflate(int cellsDeflate[]){
	 for (int i=0; i < sizeof(cellsDeflate)/sizeof(cellsDeflate[0]); i++){
	    digitalWrite(cellsDeflate[i], LOW);
	 }
}

void controlDepth(double filteredValue1, double filteredValue2, double desiredDepth){

}
void controlAttitude(double filteredValue1, double filteredValue2, double desiredAttitude){

}
