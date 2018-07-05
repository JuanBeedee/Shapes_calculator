/*
 * Shape.cpp
 *
 *  Created on: Jul 5, 2018
 *      Author: szymon
 */

#include "Shape.h"

Shape::Shape():
	number_of_nodes(0),
	node_cord(0),
	side_length(0),
	area(0),
	perimeter(0)
{
	std::cout << "Konstruktor Shape wywolany!" << std::endl;
}

Shape::~Shape(){
	node_cord.clear();
	side_length.clear();
	std::cout << "Destruktor Shape wywolany!" << std::endl;
}


Shape::Shape(const Shape & figure){
	number_of_nodes = figure.number_of_nodes;
	for(unsigned int tmp = 0; tmp < node_cord.size(); tmp++){
		node_cord[tmp] = figure.node_cord[tmp];
	}
	for(unsigned int tmp = 0; tmp < side_length.size(); tmp++){
		side_length[tmp] = figure.side_length[tmp];
	}
	area = figure.area;
	perimeter = figure.perimeter;

	std::cout << "Konstruktor kopiujacy Shape wywolany!" << std::endl;
}

