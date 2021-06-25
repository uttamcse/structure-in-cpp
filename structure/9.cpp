#include<iostream>
#include<string>
using namespace std;

struct student {
	string name;
	int age;
	int roll;
	string address;
	
	void ageforteen()
	{
		cout<<"roll no is equal to 14"<<endl;
		cout<<"Name : "<<name<<endl;
	}
	
	void evenroll()
	{
		cout<<"roll no is even"<<endl;
		cout<<"Name : "<<name<<endl;
	}
	
	void oddroll()
	{
		cout<<"roll no is odd"<<endl;
		cout<<"Name : "<<name<<endl;
	}
};

int main()
{
	struct student s[2];
	
	for(int i=0;i<=12;i++)
	{
		cout<<"Student "<<i+1<<endl;
		
		cout<<"enter name : ";
		cin>>s[i].name;
		
		cout<<"enter age : ";
		cin>>s[i].age;
		
		cout<<"enter roll : ";
		cin>>s[i].roll;
		
		cout<<"enter address :";
		cin>>s[i].address;
	}
	
	for(int i=0;i<=12;i++)
	{
		if(s[i].age==14)
		s[i].ageforteen();
	}
	
		for(int i=0;i<=1;i++)
	{
		if(s[i].roll%2==0)
		s[i].evenroll();
	}
	
		for(int i=0;i<=1;i++)
	{
		if(s[i].roll%2!=0)
		s[i].oddroll();
	}
	return 0;
}
