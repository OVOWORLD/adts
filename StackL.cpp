#include "StackL.h"
#include "List.h"
#include <iostream>
using namespace std;


int Stack::size()
{
	return data.size();
}

void Stack::push(int d)
{
	data.insert(d, 1);
}

void Stack::pop()
{
	data.remove(1);
}

int Stack::top()
{
  return data.get(1);
  
}

void Stack::clear()
{
	// you can also use data.clear();
	while(data.size() > 0)
		data.remove(1); // or you can use pop(); instead
}
