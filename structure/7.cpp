#include<iostream>
#include<string>
using namespace std;


struct student {
	
	int roll;
	string name;
	int age;
	string address;
	
	void intro()
	{
		cout<<"Name :"<<name<<endl<<"Roll No:"<<roll<<endl<<"Age :"<<age<<endl<<"Address :"<<address<<endl;
	}
};	


int main()
{
	
	struct student s[15];
	
	for(int i=0;i<=14;i++)
	{
		cout<<"student "<<i+1<<endl;
		
		cout<<"enter name :";
		cin>>s[i].name;
			
		cout<<"enter roll :";
		cin>>s[i].roll;
		
		cout<<"enter age : ";
		cin>>s[i].age;
		
		cout<<"enter address :";
		cin>>s[i].address;
	}
	
	for(int i=0;i<=14;i++)
	{
	s[i].intro();
		//cout<<"Name :"<<s[i].name<<endl<<"Roll No:"<<s[i].roll<<endl<<"Age :"<<s[i].age<<endl<<"Address :"<<s[i].address<<endl;
	}
	return 0;
}
