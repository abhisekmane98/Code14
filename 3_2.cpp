#include<iostream>
#include<string>
int main()
{
	std::string s;
	s[0]='a';
	s[1]='b';
	s[2]='c';
	s[3]='\0';
	
	std::cout<<s[2]<<"H\n";
	std::cout<<s<<"K\n";
}
