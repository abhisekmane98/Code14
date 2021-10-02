#include<iostream>
struct b
{
	virtual void f1(void)
	{
		std::cout<<"b->f1\n";	
	}
};
struct d:public b
{
	void f1(int x)
	{
		std::cout<<"d->f1\n";
	}
};
int main()
{
	b *p;
	d d1;
	p=(b*)&d1;
	
	p->f1(4);
	
}
