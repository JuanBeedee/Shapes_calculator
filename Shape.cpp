/*
 * Shape.cpp
 *
 *  Created on: Jul 5, 2018
 *      Author: szymon
 */

#include "Shape.h"

Shape::Shape():
	node_cord(0),
	side_length(0),
	angle(0)
{
	std::cout << "Konstruktor Shape wywolany!" << std::endl;
}

Shape::~Shape(){
	node_cord.clear();
	side_length.clear();
	std::cout << "Destruktor Shape wywolany!" << std::endl;
}


Shape::Shape(const Shape & figure){
	/*
	for(unsigned int tmp = 0; tmp < node_cord.size(); tmp++){
		node_cord[tmp] = figure.node_cord[tmp];
	}
	for(unsigned int tmp = 0; tmp < side_length.size(); tmp++){
		side_length[tmp] = figure.side_length[tmp];
	}
	*/
	angle = figure.angle;
	std::cout << "Konstruktor kopiujacy Shape wywolany!" << std::endl;
}

