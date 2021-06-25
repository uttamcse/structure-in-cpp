#include<iostream >
#include<string>
using namespace std;

class anil{
	protected :
		int sons;
		string name;
		string wname;
	public :
		void anilfam(int Sons,string Name,string Wname)
		{
			sons=Sons;
			name=Name;
			wname=Wname;
			
			std::cout<<"no of sons : "<<sons<<std ::endl;
			cout<<"name of first sons : "<<name<<endl;
			cout<<"name of wife : "<<wname<<endl;
			cout<<"--------------------------------------------------------------------"<<endl;
		
		}
};

class sunil{
	protected :
		int sons1;
		string name1;
		string wname1;
	public :
		void sunilfam(int Sons1,string Name1,string Wname1)
		{
			sons1=Sons1;
			name1=Name1;
			wname1=Wname1;
			
			cout<<"no of sons : "<<sons1<<endl;
			cout<<"name of first sons : "<<name1<<endl;
			cout<<"name of wife : "<<wname1<<endl;
			cout<<"--------------------------------------------------------------------"<<endl;
		}
};

class ajay{
	protected :
		int sons2;
		string name2;
		string wname2;
	public :
		void ajayfam(int Sons2,string Name2,string Wname2)
		{
						
			sons2=Sons2;
			name2=Name2;
			wname2=Wname2;
			
			cout<<"no of sons : "<<sons2<<endl;
			cout<<"name of first sons : "<<name2<<endl;
			cout<<"name of wife : "<<wname2<<endl;
			cout<<"--------------------------------------------------------------------"<<endl;

		}
};

class bhagwati : public anil ,public sunil,public ajay{
	
	public:
		void allfaimly()
		{
			
			std::cout<<"no of sons : "<<sons<<std::endl;
			std::cout<<"name of first sons : "<<name<<std::endl;
			std::cout<<"name of wife : "<<wname<<std::endl<<endl;
			
			cout<<"--------------------------------------------------------------------"<<endl;
			
			std::cout<<"no of sons : "<<sons2<<std::endl;
			std::cout<<"name of first sons : "<<name2<<std::endl;
			std::cout<<"name of wife : "<<wname2<<std::endl<<endl;
			
			cout<<"--------------------------------------------------------------------"<<endl;
				
			std::cout<<"no of sons : "<<sons1<<std::endl;
			std::cout<<"name of first sons : "<<name1<<std::endl;
			std::cout<<"name of wife : "<<wname1<<std::endl<<endl;
			
		}
			
};
int main()
{
	anil a1;
	a1.anilfam(3,"Prateek","Meena");
	
	sunil s1;
	s1.sunilfam(2,"Sidhant","Sangita");

	
	ajay a2;
	a2.ajayfam(2,"Adity","Pratibha");
	


	
	return 0;
}
