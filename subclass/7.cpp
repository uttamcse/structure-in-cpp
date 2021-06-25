#include<iostream>
#include<string>

class rectangle{
			
		public :
			int l,b;
			
		void recarea(int l,int b)
		{
			
		}
		
		void recperi()
		{
			cout<<"Rectangle Perimeter : "<<2(l+b)<<endl;
		}
};

class square : public rectangle{
	
	public :
		
		void squarea()
		{
			cout<<"Square Area : "<<(l*b)<<endl;
		}
				
		void squperi()
		{
			cout<<"Square Perimeter : "<<(l+b)<<endl;
		}

};

int main()
{
	square s1;
	s1.b=3;
	s1.l=8;
	s1.recarea(4,6);
	
	
	return 0;
}
