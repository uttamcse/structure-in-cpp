#include<iostream>
#include<string >
using namespace std;

class area{
	
	public :
		int l,b;
		
		void Area()
		{
			cout<<"Area :"<<l*b<<endl;
		}
		
		area(int L,int B)
		{
			l=L;
			b=B;
		}
};

int main()
{
	area a1=area(12,3);
	a1.Area();
	
	
	return 0;
}
