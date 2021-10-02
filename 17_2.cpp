#include<iostream>
int main()
{
	typedef int p_int; // parody int
	p_int a=3;
	std::cout<<a<<"\n";
	a.~p_int();
	std::cout<<a<<"\n";
}
