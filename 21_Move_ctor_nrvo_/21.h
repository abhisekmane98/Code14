#ifndef header
#define header

struct A
{
	private:
		int p,q;
	public:
		A();    				        //  0 arg ctor
		A(int,int);                 	//  2 arg ctor
		A(A&); 				        	//  copy ctor
		A(A&&);     			        //  Move ctor
		
		A& operator=(A&);  		        // overloading= operator
		A operator=(A&&);  		        // overloaded Move=oprator
		
		~A();             		        // desturctor
		
		void display(void);
		
		A& return_object_ref(void);
		A  return_object_val(void);
		
		void passing_object_ref(A&);
		void passing_object_val(A);
		
};
#endif
