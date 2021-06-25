
#include<iostream>
#include<string>
using namespace std;

class apple{
	public :
	 
		int napple;
		public :
			
			void nofapple(int Napple )
			{
				napple=Napple;
				
				cout<<"no of apple in basket "<<napple<<endl;
			}
};

class mango{
	public :
		int nmango;
		public :
			
			void nofmango(int Nmango )
			{
				nmango=Nmango;
			
				cout<<"no of mango in basket "<<nmango<<endl;
			}
};

class fruits : public apple,public mango{
	public :
		void fruitinbasket()
		{
			cout<<"no of fruits in basket "<<nmango+napple<<endl;	
		}
};
int main()
{
	fruits f[3];
	for(int i=0;i<=2;i++)
	{
		cout<<"Basket "<<i+1<<endl;
		cout<<"enter the no of apple : ";
		cin>>f[i].napple;
			
		cout<<"enter the no of mango : ";
		cin>>f[i].nmango;
		
	}
	for(int i=0;i<=2;i++)
	{
		f[i].fruitinbasket();
	}
	
	return 0;
}
