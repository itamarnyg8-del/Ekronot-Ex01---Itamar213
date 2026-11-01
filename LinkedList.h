#ifndef LINKEDLIST_H
#define LINKEDLIST_H


typedef struct IntNode
{
	unsigned int value;
	struct IntNode* next;
} IntNode;

void addToHead(IntNode** head, unsigned int value);
void removeFromHead(IntNode** head);

#endif 
