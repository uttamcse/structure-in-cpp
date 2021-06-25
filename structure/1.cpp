#include<iostream>
#include<string>
using namespace std;

struct student {
	string name;
	int roll;
	int age;
	int marks;
	
	void intro()
	{
		cout<<"Name :"<<name<<endl;
		cout<<"Name :"<<roll<<endl;
		cout<<"Name :"<<age<<endl;
		cout<<"Name :"<<marks<<endl;
	}
};

int main()
{
	struct student s1;
	s1.name="Uttam Yadav";
	s1.roll=19162;
	s1.age=20;
	s1.marks=73;
	s1.intro();
	
	return 0;
}
