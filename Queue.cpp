/*
 * Queue.cpp
 *
 *  Created on: Jan 8, 2016
 *      Author: raydelto
 */

#include "Queue.h"

Queue::Queue(): _first(NULL), _last(NULL), _size(0)
{


}

Queue::~Queue()
{

}

bool Queue::isEmpty()
{
	return _size == 0;
}

Vertex *Queue::dequeue()
{
	if(_first == NULL) //queue is empty
	{
		return NULL;
	}

	_size --;
	Vertex* temp = _first;
	_first = _first -> _nextQueueVertex;
	return temp;
}



void Queue::enqueue(Vertex* vertex)
{
	if(_first == NULL) //if queue is empty
	{
		_first = vertex;
		_last = vertex;
	}else
	{
		_last -> _nextQueueVertex = vertex;
		_last = vertex;
	}
	_size++;
}




