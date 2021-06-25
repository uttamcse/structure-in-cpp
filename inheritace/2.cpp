#include<iostream>
#include<string>
using namespace std;

class apple{
	protected :
		int napple;
		public :
			
			void nofapple(int Napple )
			{
				napple=Napple;
				cout<<"no of apple in basket "<<napple<<endl;
			}
};

class mango{
	protected :
		int nmango;
		public :
			
			void nofmango(int Nmango )
			{
				nmango=Nmango;
				cout<<"no of apple in basket "<<nmango<<endl;
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
	fruits f1;
	f1.nofapple(12);
	f1.nofmango(23);
	f1.fruitinbasket();
	
	return 0;
}



