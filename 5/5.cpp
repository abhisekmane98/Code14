#include"5.h"
#include<iostream>
void A::fun1()
{
	std::cout<<"fun1\n";
}
void A::fun2()
{
	std::cout<<"fun2\n";
}
void A::fun3()
{
	std::cout<<"fun3\n";
}
void A::display()
{
	std::cout<<p<<" "<<q<<" "<<r<<"\n";
}


void B::ken1()
{
	std::cout<<"ken1\n";
	
}
void B::ken2()
{
	std::cout<<"ken2\n";
}
void B::ken3()
{
	std::cout<<"ken3\n";
}
void B::display()
{
	A::display();
	std::cout<<x<<" "<<y<<" "<<z<<"\n";
}
