#include<iostream>
struct A
{
	private:
		int p,q;
	public:
		A()
		{
			
		}
		A(const A &a)  // copy ctor
		{
			std::cout<<"copy ctor\n";
			p=a.p;
			q=a.q;
		}
		A operator=(const A &a)
		{
			std::cout<<"overloaded=operator\n";
			p=a.p;
			q=a.q;
		}
		~A()
		{
			std::cout<<"dctor\n";
		}
};
int main()
{
	A a1;
}
