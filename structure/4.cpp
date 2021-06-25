#include<iostream>
#include<string>
using namespace std;

struct customers{
	
	string name;
	float balance;
	int account;
	
	void less_200_intro()
	{
		cout<<"Name :"<<name<<endl;
		cout<<"Balance :"<<balance<<endl;
		cout<<"account :"<<account<<endl;
	}
		
	void add_1000_intro()
	{
		cout<<"Name :"<<name<<endl;
		cout<<"Balance :"<<balance+1000<<endl;
		cout<<"account :"<<account<<endl;
	}
};

int main()
{

	struct customers c1;
	
		string name;
	float balance;
	int account;
	
	cout<<"enter name :";
	cin>>name;
	
	cout<<"enter account no :";
	cin>>account;
	
	cout<<"enter balance :";
	cin>>balance;
	
	if(c1.balance>1000)
	{
		c1.add_1000_intro();
	}
	
	if(c1.balance<200)
	{
		c1.less_200_intro();
	}
	return 0;
}
