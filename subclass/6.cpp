#include<iostream>
#include<string>
using namespace std;

class member{
	public :
		string name;
		int age;
		string phone;
		string address;
		float salary=23456.00;
		
		void intro()
		{
			cout<<"Name :"<<name<<endl;
			cout<<"Age : "<<age<<endl;
			cout<<"Phone No : "<<phone<<endl;
			cout<<"Address : "<<address<<endl;
		}
		
		void printsalary()
			{
				cout<<"Salary : "<<salary<<endl;
			}
		
};


int main()
{
	
	member m1;
	m1.name="Uttam";
	m1.age=20;
	m1.phone="7355268954";
	m1.address="Prayagraj";
	m1.intro();
	m1.printsalary(); 
	 
	return 0;
}
