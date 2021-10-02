#include<iostream>
struct A
{
	private:
		const int p;
		static const int a;
	public:
		A(int);
		static void show_static(void);
		void display()
		{
			std::cout<<p<<"\n";
		}
};
const int A::a=3;

A::A(int k1):p(k1)
{
	
}
void A::show_static()
{
	std::cout<<a<<"\n";
}

int main()
{
	A::show_static();
	A a1(2);
	a1.display();
}
