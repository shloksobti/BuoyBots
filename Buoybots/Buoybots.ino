 #include "Kalman.h"
#include "Control.h"

float measuredValue1;
float measuredValue2;
float filteredValue1;
float filteredValue2;
float depth;
float attitude;

float filteredVoltage;
float measuredVoltage;

Kalman myfilter(0.125,32,1023,0); // double process_noise, double sensor_noise, double estimated_error, double intial_value
Control myControl();

float voltageToDepth(float voltage){
  float depth = (231/52)*voltage - (231/40);
  return depth;
}	
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);

//  for(int i=1; i<13; i++){
//    pinMode(i, OUTPUT);
//  }

  
}

void loop() {
  // put your main code here, to run repeatedly:
   
   measuredValue1 = analogRead(A0); // Voltage
   filteredValue1 = myfilter.getFilteredValue(measuredValue1);
   
   measuredVoltage = measuredValue1 * 5/1023;
   filteredVoltage = filteredValue1 * 5/1023;
   depth = voltageToDepth(filteredVoltage);
//   
   Serial.println(depth,6);

}
