#include <Arduino.h>
#include "Kalman.h"
#include "Control.h"


double measurement, filteredMeasurement;
Kalman myFilter(0.125,32,1023,0);

void setup() {


}

void loop() {

	measurement = (double) analogRead(A0);
	filteredMeasurement = myFilter.getFilteredValue(measurement);
}
