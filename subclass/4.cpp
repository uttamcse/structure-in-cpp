#include<iostream>
#include<string>
using namespace std;

class student{
	public :
		string name;
		
		void intro()
		{
			cout<<"Name is : "<<name<<endl;
		}
		setname(string Name)
		{
			if(name=="unknown")
			name=Name;
		}
		
		string getname()
		{
			return name;
		}
		student(string Name)
		{
			name=Name;
		}
};

int main()
{
	student s1=student("uttam");
	s1.name="unknown";
	s1.intro();
	return 0;
}
