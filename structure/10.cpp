#include<iostream>
#include<string>
using namespace std;

struct student{
	
	string name;
	int balance;
	int accountno;
	
	void blessthan200()
	{
		
		cout<<name<<" your balence is less than 200$"<<endl;
	}
	
	void bgreatrethan1000()
	{
	
		cout<<name<<" your balence is "<<balance<<" which is greater than 1000$"<<endl;
		cout<<"now your balacne is "<<balance+1000<<" $ "<<endl;
	}
};

int main()
{
	struct student s[3];
	
	for(int i=0;i<=2;i++)
	{
		cout<<"student "<<i+1<<endl;
		
		cout<<"enter name : ";
		cin>>s[i].name;
		
		cout<<"enter balance : ";
		cin>>s[i].balance;
		
		cout<<"enter account : ";
		cin>>s[i].accountno;
	}
	for(int i=0;i<=2;i++)
	{
		if(s[i].balance<200)
		s[i].blessthan200();
	}
	
		for(int i=0;i<=2;i++)
	{
		if(s[i].balance>1000)
		s[i].bgreatrethan1000();
	}
	return 0;
}
