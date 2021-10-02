#include<iostream>
struct A
{
	private:
		
	public:
		int &p,q;
		A(int &k1,int k2):p(k1),q(k2)
		{
			
		}
		void display()
		{
			std::cout<<p<<" "<<q<<"\n";
		}
};

int main()
{
	int x=2;
	A a1(x,3);
	a1.display();
	std::cout<<&x<<"\n";
//	std::cout<<&k1<<"\n";
	std::cout<<&a1.p<<"\n";
	
	
	
}
