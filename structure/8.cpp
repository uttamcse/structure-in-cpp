#include<iostream>
#include<string>
using namespace std;

struct student{
	
	float math;
	float phy;
	float chem;
	
	void per()
	{
		cout<<"Mathematics : "<<math<<endl;
		cout<<"Physics : "<<phy<<endl;
		cout<<"Chemistry : "<<chem<<endl;
		cout<<"Persentage : "<<((math+phy+chem)*100)/300<<endl;
		cout<<"-----------------------------------------------------------------------------"<<endl;
	}
};

int main()
{
	struct student s[5];
	
	for(int i=0;i<=4;i++)
	{
		cout<<"student "<<i+1<<endl;
		
		cout<<"enter physics marks : ";
		cin>>s[i].phy;
		
		cout<<"enter chemistry marks : ";
		cin>>s[i].chem;
		
		cout<<"enter math marks : ";
		cin>>s[i].math;
	}
	
	for(int i=0;i<=4;i++)
	{
		s[i].per();
	}
	return 0;
}
