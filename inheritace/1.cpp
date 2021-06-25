#include<iostream>
#include<string>
using namespace std;

class mammals{
	protected :
		public:
			void aboutmam()
			{
				cout<<"i am mammal"<<endl;
			}
};


class marine{
	protected :
		public:
			void aboutmarine()
			{
				cout<<"i am marine animal"<<endl;
			}
};

class bluewhale : public mammals ,public marine{
	
	public :
		void aboutbluewhale()
		{
			cout<<"i belong to both "<<endl;
		}
};
int main()
{
	mammals mm;
	mm.aboutmam();
	marine mr;
	mr.aboutmarine();
	bluewhale bw;
	bw.aboutbluewhale();
	bw.aboutmam();
	bw.aboutmarine();
	
	return 0;
}
