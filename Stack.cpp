#include "Stack.h"
#include "LinkedList.h"
#include <iostream>

/*
This function will initalize the stack
input: the stack to initalize
output: none
*/
void initStack(Stack* s)
{
	s->head = NULL;
}

/*
This function will clean the stack and free the memory
input: the stack to clean
output: none
*/
void cleanStack(Stack* s)
{
	while (s->head != NULL)
	{
		removeFromHead(&s->head);
	}
}

/*
This function will check if the stack if empty
input: the stack to check
output: true/false if the stack if empty
*/
bool isEmpty(Stack* s)
{
	if (s->head == NULL)
	{
		return true;
	}
	return false;
}

/*
This function will check if the stack if full
inptut: the stack to check
output: false, acoording there is no limit to a stack that is based on linked list
*/
bool isFull(Stack* s)
{
	return false;
}

/*
This function will insert a new element at the top of the stack
input: the stack and the new element
output: none
*/
void push(Stack* s, unsigned int element)
{
	addToHead(&s->head, element);
}

/*
This function will remove the top element of the stack
input: the stack
output: the removed element
*/
int pop(Stack* s)
{
	unsigned int removedElement = 0;
	if (isEmpty(s))
	{
		return -1;
	}
	removedElement = s->head->value;
	removeFromHead(&s->head);
	return removedElement;

}