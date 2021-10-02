#include"8.h"
#include<iostream>
A::A()
{
	std::cout<<"ctorA\n";
	p=0;
}
A A::operator=(const A &a)
{
	std::cout<<"overloaded = operatorA\n";
	p=a.p;
	return *this;
}
A::A(const A &a)
{
	std::cout<<"copy ctorA\n";
	p=a.p;
}

void A::set_A(int k)
{
	std::cout<<"set_A\n";
	p=k;
}
void A::display()
{
	std::cout<<p<<"\n";
}

void B::set_B(int k1,int k2)
{
	std::cout<<"set_B\n";
	x=k1;
	set_A(k2);
}
void B::display()
{
	A::display();
	std::cout<<x<<"\n";
}
