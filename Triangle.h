/*
 * Triangle.h
 *
 *  Created on: Jul 5, 2018
 *      Author: szymon
 */

#ifndef TRIANGLE_H_
#define TRIANGLE_H_

#include <iostream>
#include <cstdlib>
#include <cmath>
#include <vector>
#include "Shape.h"

class Triangle: public Shape {
public:
	Triangle();
	virtual ~Triangle();
	Triangle (const Triangle & figure);

	virtual void set_shape();
	virtual void calculate_sides();
	virtual void calculate_area();
	virtual void calculate_perimeter();
	virtual void calculate_nodes(){ return;};
};

#endif /* TRIANGLE_H_ */
