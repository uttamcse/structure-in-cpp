#include<iostream>
#include<iostream>
using namespace std;

class employee{
	
	public :
		string name;
		int salary;
		int joining;
		
		void intro()
		{
			
			cout<<"Name : "<<name<<endl<<"Salary : "<<salary<<endl<<"Joining Year : "<<joining<<endl<<endl;
		}
};

int main()
{
	employee e[3];
	
	for(int i=0;i<=2;i++)
	{
		cout<<"Employee "<<i+1<<endl;
		
		cout<<"enter name : ";
		cin>>e[i].name;
		
		cout<<"enter Salary : ";
		cin>>e[i].salary;
		
		cout<<"enter joining : ";
		cin>>e[i].joining;
	}
	
	for(int i=0;i<=2;i++)
	{
		e[i].intro();
	}
	return 0;
}
