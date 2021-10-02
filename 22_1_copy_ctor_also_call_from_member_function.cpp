#include<iostream>
#include<conio.h>
class A
{
	private:
		int p,q;
	public:
		A()
		{
			p=0;q=0;
		}
		A(int k1,int k2)
		{
			p=k1;q=k2;
		}
		A(const A &a)
		{
			std::cout<<"copy ctorA\n";
			p=a.p;q=a.q;
		}
		~A()
		{
			std::cout<<"dctor of A\n";
		}
};
class B:public A
{
	private:
		int r,s;
	public:
		B()
		{
			std::cout<<"ctor of B\n";
			r=0;s=0;
		}
		B(int k1,int k2)
		{
			r=k1;s=k2;
		}
		B(const B &b) // call base class's normal ctor
		{
			r=b.r;s=b.s;
		}
		~B()
		{
			std::cout<<"Dctor of B\n";
		}
		void fun1()
		{
			std::cout<<"fun1\n";
			B b;
			A((A)b);
			getch();
		}
};
int main()
{
	B b1;
	b1.fun1();
}

