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
protected:
	int number_of_nodes;
	std::vector <Node> node_cord;
	std::vector <float> side_length;
	float area;
	float perimeter;

public:
	Shape();
	virtual ~Shape();
	Shape(const Shape & figure);

	virtual void set_shape() = 0;
	virtual void calculate_nodes() = 0;
	virtual void calculate_sides() = 0;
	virtual void calculate_area() = 0;
	virtual void calculate_perimeter() = 0;
};

#endif /* SHAPE_H_ */
