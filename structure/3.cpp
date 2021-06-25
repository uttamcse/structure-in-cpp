#include<iostream>
#include<string>
using namespace std;

struct student{
	
	string name;
	int age;
	int roll;
	string address;
	
	void intro()
	{
		cout<<"Name : "<<name<<endl;
		cout<<"Age : "<<age<<endl;
		cout<<"Roll No : "<<roll<<endl;
		cout<<"Address : "<<address<<endl;
	}
	
		void evenintro()
	{
		cout<<"even rool no num"<<endl;
		cout<<"Name : "<<name<<endl;
		cout<<"Age : "<<age<<endl;
		cout<<"Roll No : "<<roll<<endl;
		cout<<"Address : "<<address<<endl;
	}
	
		void oddintro()
	{
		cout<<"odd roll no num"<<endl;
		cout<<"Name : "<<name<<endl;
		cout<<"Age : "<<age<<endl;
		cout<<"Roll No : "<<roll<<endl;
		cout<<"Address : "<<address<<endl;
	}
};

int main()
{
	struct student s[5];
	
	for(int i=0;i<=4;i++)
	{
		cout<<"Student "<<i+1<<endl;
		
		cout<<"enter name :";
		cin>>s[i].name;
		
				
		cout<<"enter Age :";
		cin>>s[i].age;
		
				
		cout<<"enter roll no :";
		cin>>s[i].roll;
		
				
		cout<<"enter address :";
		cin>>s[i].address;
	}
	

		for(int i=0;i<=4;i++)
	{
			if(s[i].roll%2==0)
		
				s[i].evenintro();
					cout<<endl;
	

	}
	
	
		for(int i=0;i<=4;i++)
	{
			if(s[i].roll%2!=0)
		
				s[i].oddintro();
	
		cout<<endl;

	}
	
			for(int i=0;i<=4;i++)
	{
			if(s[i].roll==3)
		
				s[i].intro();
		cout<<endl;

	}
	return 0;
}
