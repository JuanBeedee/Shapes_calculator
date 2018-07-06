/*
 * Triangle.cpp
 *
 *  Created on: Jul 5, 2018
 *      Author: szymon
 */

#include "Triangle.h"

Triangle::Triangle()
{
	number_of_nodes = 3;
	for (int tmp = 0; tmp < number_of_nodes; tmp++){
		Node temp;
		node_cord.push_back(temp);
		side_length.push_back(0);
	}
	std::cout << "Konstruktor Triangle wywolany!" << std::endl;
}

Triangle::~Triangle(){
	node_cord.clear();
	side_length.clear();
	std::cout << "Destruktor Triangle wywolany!" << std::endl;
}

Triangle::Triangle(const Triangle & figure){
	number_of_nodes = figure.number_of_nodes;
	for(unsigned int tmp = 0; tmp < node_cord.size(); tmp++){
		node_cord[tmp] = figure.node_cord[tmp];
	}
	for(unsigned int tmp = 0; tmp < side_length.size(); tmp++){
		side_length[tmp] = figure.side_length[tmp];
	}
	area = figure.area;
	perimeter = figure.perimeter;

	std::cout << "Konstruktor kopiujacy Triangle wywolany!" << std::endl;
}

void Triangle::set_shape(){
	for (int tmp = 0; tmp < number_of_nodes; tmp++){
		std::cout << "Podaj wspolrzedne wierzcholka " << tmp << " : " << std::endl;
		std::cin >> node_cord.at(tmp).x >> node_cord.at(tmp).y;
		while(!std::cin.good()) {
		std::cin.clear();
		std::cin.ignore(1000, '\n');
		std::cout << "Podaj wspolrzedne wierzcholka " << tmp << " : " << std::endl;
		std::cin >> node_cord.at(tmp).x >> node_cord.at(tmp).y;
		}
	}
}

void Triangle::calculate_sides(){
	for(int act_node = 0; act_node < number_of_nodes; act_node++){
		int next_node = (act_node+1) % number_of_nodes;
		side_length.at(act_node) = sqrt( pow(node_cord.at(next_node).x-node_cord.at(act_node).x, 2) + pow(node_cord.at(next_node).y-node_cord.at(act_node).y, 2) );
	}
	return;
}

void Triangle::calculate_area(){
	float eq = 1;
	float p = 0;
	for(int tmp = 0; tmp < number_of_nodes; tmp++){
		p += side_length.at(tmp);
	}
	p *= 0.5;
	for(int tmp = 0; tmp < number_of_nodes; tmp++){
		eq *= (p-side_length.at(tmp));
	}
	eq *= p;
	area = sqrt(eq);
	std::cout << "Pole: " << area << std::endl;
	return;
}

void Triangle::calculate_perimeter(){
	for(int tmp = 0; tmp < number_of_nodes; tmp++){
		perimeter += side_length.at(tmp);
	}
	std::cout << "Obwod: " << perimeter << std::endl;
	return;
}
