#include<iostream>
#include<string>
using namespace std;

class rectangle{
	
	public :
		int l,b;
		
		void rarea(int L,int B)
		{
			l=L;
			b=B;
			cout<<"area is :"<<l*b<<endl;
			cout<<"perimeter is :"<<(l+b)/2<<endl;
			
		}
	
};


class circle : public rectangle{
	
		public :
		int l,b;
		
		void cirearea(int L,int B)
		{
			l=L;
			b=B;
			cout<<"area is :"<<l*b<<endl;
			cout<<"perimeter is :"<<(l+b)/2<<endl;
			
		}

};

int main()
{
	circle c1;
	c1.cirearea(4,7);
	c1.rarea(5,8);
	
	return 0;
}
