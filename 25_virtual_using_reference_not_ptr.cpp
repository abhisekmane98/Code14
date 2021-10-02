#include<iostream>
struct b
{
	virtual void f1(void)
	{
		std::cout<<"b->f1\n";	
	}
};
struct d: public b
{
	void f1(void)
	{
		std::cout<<"d->f1\n";
	}
};
int main()
{
	d d1;
	b &p=d1;
	p.f1();
}
