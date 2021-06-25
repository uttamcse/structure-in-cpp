#include<iostream>
#include<string>
using namespace std;

class student{
	
	public :
		float hight;
	
		
		void average()
		{
			cout<<"Average Hight: "<<hight<<endl;
		}
};

int main()
{
	int num;
	
	cin>>num;
	student s[num];
	
	for(int i=0;i<=num;i++)
	{
		
		cout<<"student "<<i+1<<endl;
		
		cout<<"enter hight : ";
		cin>>s[i].hight;
		
		
	for(int i=0;i<=num;i++)
	{
		s[i].average();
	}
	return 0;
}
