#include<iostream>
#include<string>
using namespace std;


class rectange{
	protected :
		int a;
	public :
		void recshape(int A)
		
		{
			a=A;
			cout<<"this is a rectange shape : "<<a<<endl;
		}
};


class circle{
	protected :
		int b;
	public :
		void cirshape(int B)
		{
			b=B;
			cout<<"this is a circle shape : "<<b<<endl;
		}
};

class square{
	protected :
		int c;
	public :
		void sqrshape(int C)
		{
			c=C;
			cout<<"this is a square shape "<<c<<endl;
		}
};

class shape : public rectange,public circle,public square{
	public :
		void allshape()
		{
			cout<<"this is a rectange shape "<<a<<endl;
			cout<<"this is a circle shape "<<b<<endl;
			cout<<"this is a square shape "<<c<<endl;	
		}
};

int main()
{
	shape s1;
	s1.recshape(42);
	s1.cirshape(67);
	s1.sqrshape(87);
	
	return 0;
}
