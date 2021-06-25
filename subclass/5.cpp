#include<iostream>
#include<string>
using namespace std;

class parants{
	
	public :
		void pra()
		{
			cout<<"this is parents class"<<endl;
		}
};

class child :public  parants{
	
	public :
		void chil()
		{
			cout<<"this is childs class"<<endl;
		}
};
int main()
{
	parants p1;
	p1.pra();
	child c1;
	c1.chil();
	c1.pra();
	
	return 0;
}        
