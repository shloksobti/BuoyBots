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
	this->p = this->p + this->q;

	//measurement update
	this->k = this->p / (this->p + this->r);
	this->x = this->x + this->k * (measurement - this->x);
	this->p = (1 - this->k) * this->p;

	return this->x;
}

void Kalman::setParameters(double process_noise, double sensor_noise, double estimated_error)
{
	this->q = process_noise;
	this->r = sensor_noise;
	this->p = estimated_error;
}

void Kalman::setParameters(double process_noise, double sensor_noise) {
		this->q = process_noise;
		this->r = sensor_noise;
}

double Kalman::getProcessNoise() {
	return this->q;
}

double Kalman::getSensorNoise() {
	return this->r;
}

double Kalman::getEstimatedError() {
	return this->p;
}
