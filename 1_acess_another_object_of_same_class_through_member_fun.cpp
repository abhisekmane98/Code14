#include<iostream>

struct A
{
	private:
		int p;
	public:
		A()
		{
			p=0;
		}
		void fun(A &a)
		{
			a.p=3;
		}
		void display()
		{
			std::cout<<p<<"\n";
		}
};

int main()
{
	A a1,a2;
	a1.fun(a2);
	
	a1.display();
	a2.display();
	
	
}





