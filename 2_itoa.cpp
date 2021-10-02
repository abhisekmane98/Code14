#include<iostream>
int main()
{
	int n=20;
	char s[20];
	
	itoa(n,s,10);
	std::cout<<s<<"\n";
	
	itoa(n,s,2);
	std::cout<<s<<"\n";
	
	itoa(n,s,16);
	std::cout<<s<<"\n";
	
}
