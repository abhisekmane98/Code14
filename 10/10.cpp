#include"10.h"
#include<iostream>

base::base()
{
	std::cout<<"base ctor- 0 arg\n";
	p=0; q=0;
}
base::base(const base &b)
{
	std::cout<<"base copy ctor\n";
	p=b.p;
	q=b.q;
}
base base::operator=(const base &b)
{
	std::cout<<"base overloaded=operator\n";
	p=b.p;
	q=b.q;
	return *this;
}
base::~base()
{
	std::cout<<"base dctor\n";
}


der::der()
{
	std::cout<<"derived ctor- 0 arg\n";
}
der::der(const der &d): base(d)
{
	std::cout<<"derived copy ctor\n";
	x=d.x;
	y=d.y;
	
}
der der::operator=(const der &d)
{
	std::cout<<"derived overloaded operator\n";
	
	base::operator=(d);

	x=d.x;
	y=d.y;
	return *this;
	
}
der::~der()
{
	std::cout<<"derived dctor\n";
}
