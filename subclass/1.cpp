/*#include<iostream>
#include<string>
using namespace std;

class A{
	public :
		void aaa()
		{
			cout<<"Apple"<<endl;	
		}
	
};

class B :public A{
	public :
		void bbb()
		{
			cout<<"Ball"<<endl;	
		}
		
};


class C : public B{
	public :
		void ccc()
		{
			cout<<"Cat"<<endl;	
		}
		
};


class D : public C{
	public :
		void ddd()
		{
			cout<<"Dog"<<endl;	
		}
		
};

int main()
{
	
	D d1;
	d1.aaa();
	d1.bbb();
	d1.ccc();
	d1.ddd();
	
	return 0;
}


/*#include<iostream>
#include<string>
using namespace std;

class parent{
	
	public :
		void prents()
		{
			cout<<"this is parents class"<<endl;
		}
};


class child : public parent{
	
	public :
		void Child()
		{
			cout<<"this is child class"<<endl;
		}
};
int main()
{
	
parent p1;
p1.prents();

child c1;
c1.Child();	
c1.prents();
	return 0;
}



#include<iostream>
#include<string>
using namespace std;

class A{
	
	public :
		int a;
		 void aaa()
		 {
		 	cout<<"Apple "<<a<<endl;
		 }
		  void aaa1()
		 {
		 	cout<<"Apple "<<a<<endl;
		 }
};

class B :public A{
	
	public :
		int b;
		 void bbb()
		 {
		 	cout<<"Ball "<<b<<endl;
		 }
		 
		  void bbb1()
		 {
		 	cout<<"Apple "<<a+b<<endl;
		 }
};


class C :public B{
	
	public :
		int c;
		 void ccc()
		 {
		 	cout<<"Cat "<<c<<endl;
		 	cout<<"Ball "<<b<<endl;
		 }
		 
		  void ccc1()
		 {
		 	cout<<"Cat "<<a+c<<endl;
		 	cout<<"Ball "<<b+a+c<<endl;
		 }
};

int main()
{
	C c1;
	c1.a=2;
	c1.b=4;
	c1.c=8;
	c1.aaa();
	c1.bbb();
	c1.ccc();
	c1.aaa1();
	c1.bbb1();
	c1.ccc1();
	
	cout<<"------------------------------------------------------------------------------"<<endl;
	B b1;
	b1.a=34;
	b1.b=98;
	b1.aaa();
	b1.bbb();
	b1.aaa1();
	b1.bbb1();
	cout<<"------------------------------------------------------------------------------"<<endl;
	
	A a1;
	a1.a=678;
	a1.aaa();
	a1.aaa1();
	
	return 0;
}



#include<iostream>
#include<string>
using namespace std;

class rectangle{
	
	public :
		int a,b;
		void recarea(int A,int B)
		{
			a=A;
			b=B;
			cout<<"area : "<<a*b<<endl;	
		}
		void recperi(int A,int B)
		{
			a=A;
			b=B;
			cout<<"perimeter : "<<2*(a+b)<<endl;	
		}
};


class circle : public rectangle{
	
	public :
	
		void cirarea(int A,int B)
		{
			a=A;
			b=B;
			cout<<"area : "<<a*b<<endl;	
		}
		void cirperi(int A,int B)
		{
			a=A;
			b=B;
			cout<<"perimeter : "<<2*(a+b)<<endl;	
		}
};


int main()
{
	circle c1;
	c1.cirarea(3,6);
	c1.cirperi(4,8);
	c1.recarea(3,7);
	c1.recperi(1,9);
	
	return 0;
}



#include<iostream>
#include<string>
using namespace std;

class Anamn{
	public :
		int a,b,c,d;
		
		void intro()
		{
			cout<<"a+b"<<a+b<<endl;
			cout<<"a-b"<<c-b<<endl;
			cout<<"a*b"<<a*d<<endl;
			cout<<"a/b"<<d/b<<endl;
		}
		
		Anamn(int A, int B,int C,int D)
		{
			a=A;
			b=B;
			c=C;
			d=D;
			
		}
};

int main()
{
	Anamn a1=Anamn(1,3,4,2);
	a1.intro();
	
	return 0;
}

*/

#include<iostream>
#include<string >
using namespace std;


class rectangle{
	
	public :
		int a,b;
		void recarea(int A,int B)
		{
			a=A;
			b=B;	
			cout<<"area : "<<a*b<<endl;
		}
		void recperi(int A,int B)
		{
			a=A;
			b=B;	
			cout<<"area : "<<a+b<<endl;
		}
};

class circle : public rectangle{
	
	public :
		int a,b;
		void cirarea(int A,int B)
		{
			a=A;
			b=B;	
			cout<<"area : "<<a*b<<endl;
		}
		void cirperi(int A,int B)
		{
			a=A;
			b=B;	
			cout<<"area : "<<a+b<<endl;
		}
};


int main()
{
	rectangle r1;
	r1.recarea(2,4);
	r1.recperi(6,9);
	
	circle c1;
	c1.cirarea(34,65);
	c1.cirperi(34,21);
	
	return 0;
}
