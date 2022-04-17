#include "Queue.h"

Queue::Queue()
{
	head = 0;
	tail = -1;
	length = 0;
}
Queue::Queue(int len)
{
	data = new int[len];
	head = 0;
	tail = -1;
	length = len;
}

Queue::~Queue()
{
	head = 0;
	tail = -1;
	length = 0;
	delete[]data;
}

void Queue::push(int x)
{
	if (tail + 1 < length) {
		tail++;
		data[tail] = x;
		length++;
	}
	else throw "Queue is full£¡";
}

int Queue::get_top()
{
	if (this->isEmpty()) throw "Queue is empty!";
	
	return data[head];
}

void Queue::pop()
{
	if (this->isEmpty()) throw "Queue is empty!";
	head++;
	length--;
}

bool Queue::isEmpty()
{
	return tail == -1;
}

int Queue::get_length()
{
	return length;
}
