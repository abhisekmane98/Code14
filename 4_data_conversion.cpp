#include<iostream>
struct string_
{
	private:
		char str[20];
	public:
		string_(int k)
		{
			sprintf(str,"%d",k);
		}
		void operator=(int k)
		{
			itoa(k,str,10);
		}
		void display()
		{
			std::cout<<str<<"\n";
		}
};
int main()
{
	string_ s=20; // s.operator=(20)
	s.display();
}






