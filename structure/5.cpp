#include<iostream>
#include<string>
using namespace std;

struct student{
	
	int roll_no;
	string name;
	int age;
	int marks;
	
};

int main()
{
	struct student s1;
	s1.roll_no=19162;
	s1.name="Uttam";
	s1.age=20;
	s1.marks=78;
	
	cout<<"Name :"<<s1.name<<endl<<"ROLL NO :"<<s1.roll_no<<endl;
	cout<<"Age :"<<s1.age<<endl<<"Marks :"<<s1.marks<<endl;
	
	return 0;
}
