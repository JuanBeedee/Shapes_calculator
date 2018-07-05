/*
 * Node.h
 *
 *  Created on: Jul 5, 2018
 *      Author: szymon
 */

#ifndef NODE_H_
#define NODE_H_

#include <iostream>

class Node {
public:
	float x;
	float y;

	Node();
	virtual ~Node();
	Node(const Node & nod);
	Node & operator = (const Node & nod);
};

#endif /* NODE_H_ */
