#include "StackV.h"
#include <iostream>
using namespace std;

int Stack::size()
{
	return data.size();
}

void Stack::push(int d)
{
	data.push_back(d);
}

void Stack::pop()
{
	data.pop_back();
}

int Stack::top()
{
	return data[data.size()-1];
}

void Stack::clear()
{
	for(unsigned int i=0;i<=data.size();i++)
	{
		data.pop_back();
	}	
	
}
