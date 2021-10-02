#include"21.h"
#include<iostream>

A::A(): p(0),q(0)                                       // O arg ctor
{
	std::cout<<"0 arg ctor\n";
		
}

A::A(int k1,int k2): p(k1),q(k2)                // 2 arg ctor
{
	std::cout<<"2 arg ctor\n";
	
}

A::A(A &a)                                              // copy ctor
{
	std::cout<<"copy ctor\n";
	
	p=a.p;
	q=a.q;
	
}

A::A(A &&a)                                           //  Move ctor
{
	std::cout<<"Move ctor\n";
	
	p=a.p;
	q=a.q;
	
}


A& A::operator=(A &a)                 // Overloaded assignement opeator `OVA`
{
	std::cout<<"overloade= operator\n";
	
	p=a.p;
	q=a.q;
	return *this;
	
}


A A::operator=(A &&a)                        // `M_OVA`
{
	std::cout<<"Move overloade = operator\n";
	
	p=a.p;
	q=a.q;
	return *this;
	
}

A::~A()                                       // Dctor
{
	std::cout<<"Dctor\n";
	
}

void A::display()
{
	std::cout<<p<<" "<<q<<"\n";
	
}

A& A::return_object_ref()
{
	std::cout<<"return_object_ref_fun\n";
	static A a(11,13);
	std::cout<<"&static a "<<&a<<"\n";
	return a;
	
}

A A::return_object_val()
{
	std::cout<<"return_object_val_fun\n";
	static A a(21,23);
	std::cout<<"&static a "<<&a<<"\n";
	return a;
}

void A::passing_object_ref(A &a)
{
	std::cout<<"passing_object_ref_fun\n";
	std::cout<<&a<<"\n";
}

void A::passing_object_val(A a)
{
	std::cout<<"passing_object_val_fun\n";
	std::cout<<"a "<<&a<<"\n";
}
