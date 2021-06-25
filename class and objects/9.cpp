#include<iostream>
#include<string>
using namespace std;

class student {
	public :
		
	string name;
	int roll;
	string phone;
	string address;
	
	void intro()
	{
		
		cout<<"Name :"<<name<<endl;
		cout<<"Roll : "<<roll<<endl;
		cout<<"Phone : "<<phone<<endl;
		cout<<"Address : "<<address<<endl<<endl;
	}
};

int main()
{
	student sam;
	sam.name="Sam";
	sam.roll=1;
	sam.phone="7355268954";
	sam.address="Prayagraj";
	sam.intro();
	
	student jhon;
	jhon.name="jhon";
	jhon.roll=2;
	jhon.phone="9315263954";
	jhon.address="Delhi";
	jhon.intro();
	
	
	return 0;
}
