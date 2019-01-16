/*
 * Kalman.cpp
 *
 *  Created on: Jan 16, 2019
 *      Author: shloksobti
 */

#include "Kalman.h"

Kalman::Kalman(double process_noise, double sensor_noise, double estimated_error, double intial_value)
{
	this->q = process_noise;
	this->r = sensor_noise;
	this->p = estimated_error;
	this->x = intial_value;
	this->k = 0;
}


double Kalman::getFilteredValue(double measurement)
{
	return 0;
}

void setParameters(double process_noise, double sensor_noise, double estimated_error)
{

}


