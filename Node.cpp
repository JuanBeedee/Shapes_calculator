/*
 * Node.cpp
 *
 *  Created on: Jul 5, 2018
 *      Author: szymon
 */

#include "Node.h"

Node::Node():
	x(0),
	y(0)
{
	std::cout << "Konstruktor Node wywolany!" << std::endl;
}

Node::~Node(){
	std::cout << "Destruktor Node wywolany!" << std::endl;
}

Node::Node(const Node & nod){
	x = nod.x;
	y = nod.y;
	std::cout << "Konstruktor kopiujacy Node wywolany!" << std::endl;
}

Node & Node::operator = (const Node & nod){
	x = nod.x;
	y = nod.y;
	return *this;
}
