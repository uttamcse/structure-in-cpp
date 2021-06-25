#include<iostream>
#include<string>
using namespace std;

class vehicles{
	public :
			float milage;
			float price;
	public :
		void aboutvhcl(float Milage,float Price)
		{
			milage=Milage;
			price=Price;
			cout<<"vehicals"<<endl;
		}
	
};

class car :public vehicles{
	public :
		int year;
		int capacity;
		string fuletype;
	public :
		void aboutcar(int Year,int Capacity,string Fuletype)
		{
			year=Year;
			capacity=Capacity;
			fuletype=Fuletype;
			cout<<"about car"<<endl;
		}
};


class bike :public vehicles{
	public :
		int cylender;
		int gear;
		string coolingtype;
		string wheeltypes;
		float tanksize;
	public :
		void aboutbike()
		{
		
			cout<<"bike milage "<<milage<<endl;
			cout<<"bike wheeltypes "<<wheeltypes<<endl;
			cout<<"----------------------------------------------------------------------"<<endl;
		}
};


int main()
{
	
	bike b[3];
	
	for(int i=0;i<=2;i++)
	{
		
		cout<<"bike "<<i+1<<endl;
		
		cout<<"enter wheel type : ";
		cin>>b[i].wheeltypes;
		
		cout<<"enter year :";
		cin>>b[i].milage;
		
	}
	
	for(int i=0;i<=2;i++)
	{
		b[i].aboutbike();
	}
	return 0;
}
