/*
 * main.cpp
 *
 *  Created on: Jan 8, 2016
 *      Author: raydelto
 */

#include <iostream>
#include "Graph.h"
using namespace std;

int main()
{
	Graph* graph = new Graph();

	Vertex* a = new Vertex("A");
	Vertex* b = new Vertex("B");
	Vertex* c = new Vertex("C");
	Vertex* d = new Vertex("D");

	a->addAdjacent(b);
	a->addAdjacent(c);
	b->addAdjacent(c);
	c->addAdjacent(d);

	graph->traverse(a);
	cout << "The distance from D to A equals " << d-> getDistance() << endl;

	Vertex* i = d;
	while(i != NULL){
		cout << i -> getName() << endl;
		i = i -> getRoute();
	}
	return 0;
}
