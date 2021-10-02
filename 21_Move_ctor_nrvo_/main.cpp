#include"21.h"
#include <iostream>
A make_A(void);
int main()
{
	
	A a1;
	a1=make_A();
	
	a1.display();
}
A make_A()
{
	A a(91,92);
	return a;
}
