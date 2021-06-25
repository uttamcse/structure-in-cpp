#include<iostream>
#include<string>
using namespace std;

class triangle{
	
	public :
		
	float a,b,c;
	
	void area(float A,float B,float C)
	{
		cout<<"area : "<<a*b*c<<endl;
		a=A;
		b=B;
		c=C;
	}
	
	void perimeter(float A,float B,float C)
	{
		cout<<"perimeter : "<<(a+b+c)/2<<endl;
		a=A;
		b=B;
		c=C;
	}
};

int main()
{
	triangle t1;
	
	t1.a=2;
	t1.b=4;
	t1.c=6;
	
	t1.area(t1.a,t1.b,t1.c);
	t1.perimeter(t1.a,t1.b,t1.c);
	
	return 0;
}
