#include<iostream>
struct A
{
	int a;
	const char *s;
	A(int k1,const char *str):a(k1),s(str)
	{
		std::cout<<"2 arg ctor\n";
	}
};

int main()
{
	A a1(2,"vicky");
	A a2=(2,"vicky M");
	
	A a3{2,"vicky K"};
	A a4={2,"vicky V"};
}
