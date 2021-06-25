#include<iostream>
#include<string>
using namespace std;

class student{
	
	public :
		float roll;
		float a,b,c;
		
		void average()
		{
			cout<<"Average : "<<(a+b+c)/3<<endl;
		}
};

int main()
{
	int num;
	
	cin>>num;
	student s[num];
	
	for(int i=0;i<=num;i++)
	{
		
		cout<<"student "<<i+1<<endl;
		
		cout<<"enter a : ";
		cin>>s[i].a;
		
		cout<<"enter b : ";
		cin>>s[i].b;
		
		cout<<"enter c : ";
		cin>>s[i].c;
	}
	for(int i=0;i<=num;i++)
	{
		s[i].average();
	}
	return 0;
}
