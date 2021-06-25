#include<iostream>
#include<string>
using namespace std;

class student {
	
	public:
		string name;
		int roll;
		
};

int main()
{
	student s1;
	s1.name="JOHN";
	s1.roll=2;
	cout<<"Name : "<<s1.name<<endl;
	cout<<"Roll : "<<s1.roll<<endl;
}
