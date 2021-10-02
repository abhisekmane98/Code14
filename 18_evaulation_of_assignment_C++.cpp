#include<iostream>
int main()
{
	int a,b=3;
	std::cout<<&a<<"\n";
	std::cout<<&(a=b);
}
