#include "Queue.h"
#include <iostream>

/*
this function initialize the queue with the given size
input: the queue to initialize and its size
output: none
*/
void initQueue(Queue *q, unsigned int size)
{
	q->queueValues = new unsigned int[size];
	q->size = size;
	q->count = 0;
	q->firstIndex = 0;
	q->lastIndex = 0;
}

/*
This function will clean the queue and free the memory that the queue took
input: the queue to clean
output: none
*/
void cleanQueue(Queue *q)
{
	delete[] q->queueValues;
	q->queueValues = NULL;
}

/*
This function will check if the queue is empty
input: the queue
output: true/false if the queue is empty
*/
bool isEmpty(Queue *s)
{
	if (s->count == 0)
	{
		return true;
	}
	return false;
}

/*
This function will check if the queue is full
input: the queue
output: true/false if the queue is full
*/
bool isFull(Queue *s)
{
	if (s->count == s->size)
	{
		return true;
	}
	return false;
}

/*
This function will put values into the queue using FIFO
input: the queue and the new value to put in the queue
output: none
*/
void enqueue(Queue *q, unsigned int newValue)
{
	if (isFull(q))
	{
		return;
	}
	q->queueValues[q->lastIndex] = newValue;
	q->lastIndex++;
	if (q->lastIndex >= q->size)
	{
		q->lastIndex = 0;
	}
	q->count++;
}

/*
This function will remove the first value in the queue and return it
input: the queue
output: the removed value
*/
int dequeue(Queue* q)
{
	int removedValue = 0;
	if (isEmpty(q))
	{
		return -1;
	}
	removedValue = q->queueValues[q->firstIndex];
	q->firstIndex++;
	if (q->firstIndex >= q->size)
	{
		q->firstIndex = 0;
	}
	q->count--;
	return removedValue;
}