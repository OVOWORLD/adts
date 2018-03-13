#include "StackLL.h"
#include <iostream>
using namespace std;

class Stack::Node
{
	public:
	int num = 0;
	Node* nextPtr = nullptr;
};

Stack::~Stack()
{
	clear();
}

int Stack::size()
{
	return num_elements;
}

void Stack::push(int d)
{
	num_elements++;
	Node* newPtr= new Node{d};
	newPtr->nextPtr = frontPtr;
	frontPtr= newPtr;
}
void Stack::pop()
{
	num_elements--;
	Node* delPtr;
	delPtr =frontPtr;
	frontPtr = frontPtr -> nextPtr;
	delete delPtr;
}

int Stack::top()
{
	return frontPtr-> num;
}

void Stack:: clear()
{
	for(unsigned int i=1; i<=num_elements; i++)
	{
		pop();
	}
}

	
	
