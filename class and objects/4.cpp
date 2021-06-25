#include<iostream>
#include<string>
using namespace std;

class area{
	
	public :
		int l,b;
		
		setdim(int L,int B)
		{
			l=L;
			b=B;
		}
		
		void getarea(int L,int B)
		{
			cout<<"AREA :"<<l*b<<endl;
		}
};

int main()
{
	area a1;
	a1.b=4;
	a1.l=5;
	a1.getarea(a1.b,a1.l);
	
	

return 0;
}
