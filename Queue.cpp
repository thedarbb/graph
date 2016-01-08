/*
 * Queue.cpp
 *
 *  Created on: Jan 8, 2016
 *      Author: raydelto
 */

#include "Queue.h"

Queue::Queue():_first(NULL),_last(NULL)
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
	if(_first == NULL)
	{
		return NULL;
	}

	_size --;

	return NULL; //remove this with real code. Made this line to avoid warnings.
}



void Queue::enqueue(Vertex* vertex)
{
	_size++;
}




