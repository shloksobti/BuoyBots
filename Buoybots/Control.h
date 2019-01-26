/*
 * Control.h
 *
 *  Created on: Jan 16, 2019
 *      Author: shloksobti
 */

#ifndef CONTROL_H_
#define CONTROL_H_

class Control {
public:

	Control();

	double getAttitude(double filteredValue1, double filteredValue2);
	double getDepth(double filteredValue1, double filteredValue2);

	void inflate(int cellsInflate[]);
	void deflate(int cellsDeflate[]);

	void controlDepth(double filteredValue1, double filteredValue2, double desiredDepth);
	void controlAttitude(double filteredValue1, double filteredValue2, double desiredAttitude);

};

#endif /* CONTROL_H_ */
