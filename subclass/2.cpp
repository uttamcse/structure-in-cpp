#include<iostream>
#include<string>
using namespace std;

class member{
	
	public :
		string name;
		int age;
		string phone ;
		string address;
		int salary=45000;
		
		void getsalary()
		{
			cout<<"Salary is : "<<salary<<endl;
		cout<<"------------------------------------------------------------------------------"<<endl;
		}
};

class employee : public member{
	
	public :
		string dep;
		string spec;
		
		void emp(/*string dep,string spec*/)
		{
			cout<<"department is "<<dep<<endl;
			cout<<"specializion is "<<spec<<endl;
		}
};



class maneger : public employee{
	
	public :
		void emplyees(string name,int age,string phone,string address)
		{
			cout<<"about employees introduction "<<endl;
			cout<<"Name : "<<name<<endl;
			cout<<"Age : "<<age<<endl;
			cout<<"Phone : "<<phone<<endl;
			cout<<"Address : "<<address<<endl;
			cout<<"------------------------------------------------------------------------------"<<endl;
		}
		
			void members(string name,int age,string phone,string address)
		{
			cout<<"about member introduction "<<endl;
			cout<<"Name : "<<name<<endl;
			cout<<"Age : "<<age<<endl;
			cout<<"Phone : "<<phone<<endl;
			cout<<"Address : "<<address<<endl;
			cout<<"------------------------------------------------------------------------------"<<endl;
		}
		
};	
int main()
{
maneger m1;m1.getsalary();
m1.emplyees("Utt",20,"7355268954","Prayagraj");
m1.members("Utt",20,"7355268954","Prayagraj");	
	
	return 0;
}
