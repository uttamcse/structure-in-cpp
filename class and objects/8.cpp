#include<iostream>
#include<string>
using namespace std;

class student {
	public :
	string name;
	int roll_no;
	
	
};

int main()
{
	student s1;
	s1.name="JHON";
	s1.roll_no=2;
	cout<<"name :"<<s1.name<<endl<<"roll : "<<s1.roll_no<<endl;
	
	return 0;
}
