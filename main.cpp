/*
 * main.cpp
 *
 *  Created on: Jan 8, 2016
 *      Author: raydelto
 */

#include <iostream>
using namespace std;

int main()
{
	Graph* graph = new Graph();

	Vertex* a = new Vertex("A");
	Vertex* b = new Vertex("B");
	Vertex* c = new Vertex("C");

	graph->traverse(a);
	graph->traverse(b);
	graph->traverse(c)

	return 0;
}
