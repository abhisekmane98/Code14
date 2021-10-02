#ifndef header
#define header
#include<iostream>

struct A
{
	private:
		int p;
	public:
		A();
		A operator=(const A&);
		A(const A&);
		
		void set_A(int);
		void display(void);
		~A()
		{
			std::cout<<"dctorA\n";
		}
		
};
struct B:public A
{
	private:
		int x;
	//	using A::set_A;
	public:
		
		void set_B(int,int);
		void display(void);
		
};
#endif
