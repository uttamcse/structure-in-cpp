#include<iostream>
#include<string>
using namespace std;


	struct student {
		
		string name;
		int age;
		
		
		void intro()
		{
			cout<<"Name :"<<name<<endl;
			cout<<"Age :"<<age<<endl;
		}
	};
	int main()
{
	struct student s[5];
	for(int i=0;i<=4;i++)
	{
		cout<<"Student "<<i+1<<endl;
		
		cout<<"Enter your name :";
		cin>>s[i].name;
		
		cout<<"enter your age :";
		cin>>s[i].age;
	}
	
	for(int i=0;i<=4;i++)
	{
		if(s[i].age==2)
		{
				s[i].intro();
				
		}
	cout<<"------------------------------------------------------------------------------"<<endl;
	}

	return 0;
}
