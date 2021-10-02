#include<iostream>
struct A
{
	~A()
	{
		std::cout<<"dctorA\n";
	}
};
struct B: public A
{
	~B()
	{
		std::cout<<"dctorB\n";
	}
};

int main()
{
	B b1;
	b1.~A();
}
