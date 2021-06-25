#include<iostream>
#include<string>
using namespace std;

class employee{
	public :
		string name;
		int year;
		string address;
		
		void about()
		{
			cout<<"Name : "<<name<<endl;
			cout<<"Year : "<<year<<endl;
			cout<<"Address : "<<address<<endl;
		}
		
		employee(string Name,int Year,string Address)
		{
			name=Name;
			address=Address;
			year=Year;
		}
};

int main()
{
employee a1 = employee("Uttam",2019,"Prayagraj");
a1.about();
cout<<"------------------------------------------------------------------------------"<<endl;
employee a2 = employee("Anamika",2018,"Alwar");
a2.about();
cout<<"------------------------------------------------------------------------------"<<endl;
employee a3 = employee("Rohit",2017,"Jaipur");
a3.about();

	
	
	return 0;
}
