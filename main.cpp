/*
 * main.cpp
 *
 *  Created on: Jul 5, 2018
 *      Author: szymon
 */

#include <iostream>
#include "Node.h"
#include "Shape.h"
#include "Triangle.h"

using namespace std;


int main(){
	Triangle test1;
	test1.set_shape();
	test1.calculate_sides();
	test1.calculate_area();
	test1.calculate_perimeter();

	return 0;
}

