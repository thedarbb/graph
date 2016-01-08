/*
 * Vertex.cpp
 *
 *  Created on: Jan 8, 2016
 *      Author: raydelto
 */

#include "Vertex.h"


Vertex::Vertex(std::string name): _name(name), _firstAdjacent(NULL),_lastAdjacent(NULL),_nextAdjacent(NULL),_nextQueueVertex(NULL), _route(NULL),_distance(-1)
{
}

Vertex::~Vertex()
{

}
