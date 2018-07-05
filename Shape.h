/*
 * Shape.h
 *
 *  Created on: Jul 5, 2018
 *      Author: szymon
 */

#ifndef SHAPE_H_
#define SHAPE_H_

#include <iostream>
#include <cstdlib>
#include <vector>
#include "Node.h"

class Shape {
	std::vector <Node> node_cord;
	std::vector <float> side_length;
	float angle;

public:
	Shape();
	virtual ~Shape();
	Shape(const Shape & figure);
	virtual void calculate_nodes(){};
	virtual void calculate_sides(){};
	virtual void calculate_area(){};
	virtual void calculate_perimeter(){};
};

#endif /* SHAPE_H_ */
