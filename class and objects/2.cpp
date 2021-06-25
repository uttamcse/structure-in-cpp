#include<iostream>
#include<string>
using namespace std;

class student{
	public :
	string phone;
	string address;
	int roll;
};

int main()
{
	student jhon;
	jhon.address="PRYAGRAJ";
	jhon.phone="7355269878";
	jhon.roll=1;
	
		cout<<"Address : "<<jhon.address<<endl;
		cout<<"Address : "<<jhon.phone<<endl;
		cout<<"Address : "<<jhon.roll<<endl;
	
		student sam;
	sam.address="Shonbhdra";
	sam.phone="7355269354";
	sam.roll=2;
	
		cout<<"Address : "<<sam.address<<endl;
		cout<<"Address : "<<sam.phone<<endl;
		cout<<"Address : "<<sam.roll<<endl;
	
	
	
	return 0;
}
