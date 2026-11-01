#include "LinkedList.h"
#include <iostream>


/*
This fucntion will add the node to the start of the list
input: the head of the current list and the new value
output: none
*/
void addToHead(IntNode** head, unsigned int value)
{
	IntNode* newNode = new IntNode;
	newNode->value = value;
	newNode->next = *head;
	*head = newNode;
}

/*
This function will remove the first node of the list
input: the head of the list
output: none
*/
void removeFromHead(IntNode** head)
{
	if (*head == NULL)
	{
		return;
	}
	IntNode* dNode = *head;
	*head = dNode->next;
	delete dNode;
}