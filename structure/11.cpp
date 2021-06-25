#include<iostream>
#include<string>
using namespace std;

struct duration {
	
	int date;
	int month;
	int year;
	
	void same()
	{
		cout<<"Date is same : "<<date<<":"<<month<<":"<<year<<endl;
	}
	
		
	void notsame()
	{
		cout<<"Date is note same : "<<date<<":"<<month<<":"<<year<<endl;
	}
};

int main()
{
	struct duration s[2];
	
	for(int i=0;i<=1;i++)
	{
		cout<<"enter date : ";
		cin>>s[i].date;
		
		cout<<"enter month : ";
		cin>>s[i].month;
		
		cout<<"enter year :";
		cin>>s[i].year;
			
	}
	
	for(int i=0;i<=1;i++)
	{
		if()
	}
	return 0;
}
