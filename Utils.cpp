#include "Utils.h"
#include "Stack.h"
#include <iostream>

#define SIZE 10

/*
This function will use the stack to reverse the order of the numbers in the array
input: the array of numbers and the size
output: none
*/
void reverse(int* nums, unsigned int size)
{
	Stack* s = new Stack;
	initStack(s);
	for (int i = 0; i < size; i++)
	{
		push(s, nums[i]);
	}
	for (int i = 0; i < size; i++)
	{
		nums[i] = pop(s);
	}
	cleanStack(s);
	delete s;
}

/*
This function will make an array of 10 numbers that are given from the user and reverse them
input: none
ouput: the flipped array of numbers
*/
int* reverse10()
{
	int* nums = new int[SIZE];
	std::cout << "Please enter 10 numbers:" << std::endl;
	for (int i = 0; i < 10; i++)
	{
		std::cin >> nums[i];
	}
	reverse(nums, SIZE);
	return nums;
}