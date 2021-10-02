#ifndef header
#define header
#include<iostream>
struct A
{
	private:
		int p;
		void fun1(void);
	protected:
		int q;
		void fun2(void);
	public:
		int r;
		void fun3(void);
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
		void ken1(void);
	protected:
		int y;
		void ken2(void);
	public:
		int z;
		void ken3(void);
		void display(void);
		~B()
		{
			std::cout<<"dctorB\n";
		}
};
#endif
