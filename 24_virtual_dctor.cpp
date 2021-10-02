#include<iostream>
struct b
{
	b()
	{
		std::cout<<"b->ctor\n";
	}
	virtual ~b()
	{
		std::cout<<"b->dctor\n";
	}
};
struct d:public b
{
	
	d()
	{
		std::cout<<"d->ctor\n";
	}
	~d()
	{
		std::cout<<"d->dctor\n";
	}
};
int main()
{
	b *p;
	p=new d;
	delete p;
	
}
