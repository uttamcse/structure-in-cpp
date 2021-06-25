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
		string modeltype;
	public :
		void aboutcar(int Year,int Capacity,string Fuletype,string Modeltype,float Milage,float Price)
		{
			modeltype=Modeltype;
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
		string wheeltype;
		float tanksize;
		string modeltype;
	
	public :
		void aboutbike(float Milage,float Price,int Cylender,int Gear,string Coolingtype,string Wheeltype,float Tanksize,string Modeltype)
		{
			cylender=Cylender;
			gear=Gear;
			coolingtype=Coolingtype;
			wheeltype=Wheeltype;
			tanksize=Tanksize;
			modeltype=Modeltype;
			cout<<"about bike ......."<<endl;
		}
};

class audi : public car{
	public: 

	public :
		void aboutaudi()
		{
			
			cout<<"this is vehicals class : "<<endl;
			cout<<"this is car class : "<<endl;
			cout<<"audi modeltype is : "<<modeltype<<endl;
			cout<<"audi price is : "<<price<<endl;
			cout<<"audi milage is : "<<milage<<endl;
			cout<<"audi sitting capacity is : "<<capacity<<endl;
			cout<<"audi launching year is : "<<year<<endl;
			cout<<"audi fule type is : "<<fuletype<<endl;
			cout<<"------------------------------------------------------------------------------"<<endl;
		}
};

class ford : public car{
	public: 
	
	public :
		void aboutford()
		{
			
			cout<<"this is vehicals class : "<<endl;
			cout<<"this is car class : "<<endl;
			cout<<"ford modeltype is : "<<modeltype<<endl;
			cout<<"ford price is : "<<price<<endl;
			cout<<"ford milage is : "<<milage<<endl;
			cout<<"rord sitting capacity is : "<<capacity<<endl;
			cout<<"ford launching year is : "<<year<<endl;
			cout<<"ford fule type is : "<<fuletype<<endl;
			cout<<"------------------------------------------------------------------------------"<<endl;
		}
};


class bajaj : public bike{
	public: 
	
	public :
		void aboutbajaj()
		{
			
			cout<<"this is vehicals class : "<<endl;
			cout<<"this is bike class : "<<endl;
			cout<<"bajaj cylender is : "<<cylender<<endl;
			cout<<"bajaj gear used : "<<gear<<endl;
			cout<<"bajaj coolingtype is : "<<coolingtype<<endl;
			cout<<"bajaj modeltype is : "<<modeltype<<endl;
			cout<<"bajaj wheeltype  is : "<<wheeltype<<endl;
			cout<<"bajaj tanksize is : "<<tanksize<<endl;
			cout<<"------------------------------------------------------------------------------"<<endl;
		}
		
};

class tvs : public bike{
	public: 
	
	public :
		void abouttvs()
		{
		
			cout<<"this is vehicals class : "<<endl;
			cout<<"this is bike class : "<<endl;
			cout<<"bajaj cylender is : "<<cylender<<endl;
			cout<<"bajaj gear used : "<<gear<<endl;
			cout<<"bajaj coolingtype is : "<<coolingtype<<endl;
			cout<<"bajaj modeltype is : "<<modeltype<<endl;
			cout<<"bajaj wheeltype  is : "<<wheeltype<<endl;
			cout<<"bajaj tanksize is : "<<tanksize<<endl;
			cout<<"------------------------------------------------------------------------------"<<endl;
		}
};
int main()
{

	audi a1;
	a1.year=1974;
	a1.modeltype="super";
	a1.capacity=6;
	a1.fuletype="petrol";
	a1.milage=99.99;
	a1.price=100001;
	a1.aboutaudi();
	
	ford f1;
	f1.year=1974;
	f1.modeltype="super";
	f1.capacity=4;
	f1.fuletype="deisle";
	f1.milage=98.99;
	f1.price=10001;
	f1.aboutford();
	
	bajaj b1;
	b1.coolingtype="liqid";
	b1.cylender=2;
	b1.gear=3;
	b1.milage=88.99;
	b1.modeltype="best";
	b1.price=888.99;
	b1.tanksize=4.76;
	b1.wheeltype="alloys";
	b1.aboutbajaj();
		
	tvs t1;
	t1.coolingtype="air";
	t1.cylender=4;
	t1.gear=5;
	t1.milage=84.99;
	t1.modeltype="Best";
	t1.price=688.99;
	t1.tanksize=5.76;
	t1.wheeltype="spokes";
	t1.abouttvs();
	
	return 0;
}
