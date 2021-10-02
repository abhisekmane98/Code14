#include<iostream>
int main()
{
	int x=3;
	int &k1=x;
	int &p=k1;
	
	std::cout<<&x<<"\n";
	std::cout<<&k1<<"\n";
	std::cout<<&p<<"\n";
	
}
