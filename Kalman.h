/*
 * Kalman.h
 *
 *  Created on: Jan 16, 2019
 *      Author: shloksobti
 */

#ifndef KALMAN_H_
#define KALMAN_H_

class Kalman {
public:

	double q;
	double r;
	double x;
	double p;
	double k;

public:

	Kalman(double process_noise, double sensor_noise, double estimated_error, double intial_value);

	double getFilteredValue(double measurement);
	void setParameters(double process_noise, double sensor_noise, double estimated_error);

	double getProcessNoise();
	double getSensorNoise();
	double getEstimatedError();


};

#endif /* KALMAN_H_ */
