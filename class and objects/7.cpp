#include<iostream>
#include<string>
using namespace std;

class AddDistance{
	public :
	float feet;
	float inch;
	
	void hight()
	{
		cout<<"your hight is "<<feet<<"."<< +inch<<endl;
	}
	AddDistance(float Feet,float Inch)
	 {
	 	feet=Feet;
	 	inch=Inch;
	 }
	
};

int main()
{
	
	AddDistance ad1 =AddDistance(59.0,60.0);
	ad1.hight();
	
	return 0;
}
