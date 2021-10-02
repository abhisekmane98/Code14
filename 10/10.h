#ifndef header
#define header

struct base
{
	private:
		int p,q;
	public:
		base();
		base(const base&);              
		base operator=(const base&);    
		~base();
};

struct der: public base
{
	private:    
		int x,y;
	public:
		
		der();
		der(const der&);
		der operator=(const der&);
		~der();
}; 
#endif
