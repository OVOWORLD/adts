#include <iostream>
#include "List.h"

using namespace std;

int main()
{

 List L1, L2;

 //Do some stuff with L1, L2, ...
 // ...
 L1.insert(5,1);
 L1.insert(4,2);
 L1.insert(3,1);
 L1.insert(2,3);
 L1.insert(7,4);
 L1.insert(10,5);
 L2.insert(3,1);
 L2.insert(5,2);
 L2.insert(7,3);
 L2.insert(6,4);
 
 for(int i=1;i<=L1.size();i++)
 {
 cout << L1.get(i) << endl;
}
}
