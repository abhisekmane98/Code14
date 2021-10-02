#include<iostream>
struct A
{
	int *p=new int[4];
}a1;
int main()
{
	a1.p[0]=3;
	a1.p[1]=2;
	std::cout<<a1.p[0]<<" "<<a1.p[1];
}
