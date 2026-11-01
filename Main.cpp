#include "LinkedList.h"
#include <iostream>

int main()
{
	IntNode* head = NULL;
	IntNode* curr = NULL;
	addToHead(&head, 1);
	addToHead(&head, 2);
	addToHead(&head, 3);
	curr = head;
	std::cout << "Before remove" << std::endl;
	while (curr != NULL)
	{
		std::cout << curr->value << std::endl;
		curr = curr->next;
	}
	removeFromHead(&head);
	curr = head;
	std::cout << "After remove" << std::endl;
	while (curr != NULL)
	{
		std::cout << curr->value << std::endl;
		curr = curr->next;
	}
	return 0;
}