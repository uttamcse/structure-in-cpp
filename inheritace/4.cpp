#include<iostream>
#include<string>
using namespace std;

class vehicles{
	protected :
			float milage;
			//float price;
	public :
		void aboutvhcl(float Milage)
		{
			milage=Milage;
			cout<<"vehicals"<<endl;
		}
	

	
};

class car :public vehicles{
	protected :
		int year;
		//int capacity;
		//string fuletype;
	public :
		void aboutcar(int Year)
		{
			year=Year;
			cout<<"about car"<<endl;
		}
};


class bike :public vehicles{
	protected :
		//int cylender;
		//int gear;
		//string coolingtype;
		string wheeltypes;
		//float tanksize;
	public :
		void aboutbike()
		{
		
			cout<<"about bike"<<endl;
		}
};
int main()
{
	
	bike b1;
	b1.aboutbike();
	return 0;
}
