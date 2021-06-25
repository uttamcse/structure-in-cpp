#include<iostream>
#include<string>
using namespace std;


int main()
{

struct student {
	
	int roll;
	string name;
	
};	
	
	struct student s[5];
	
	for(int i=0;i<=4;i++)
	{
		cout<<"student "<<i+1<<endl;
		
		cout<<"enter name :";
		cin>>s[i].name;
			
		cout<<"enter roll :";
		cin>>s[i].roll;
	}
	
	for(int i=0;i<=4;i++)
	{
		if(s[i].roll==2)
		cout<<" Name :"<<s[i].name<<endl<<"Age :"<<s[i].roll<<endl;
	}
	return 0;
}
