#include<iostream>
using namespace std;
class box
{
	float l,b,h;
	public:
		box()
		{
		 l=0;
		 b=0;
		 h=0;	
		}
		box(int x ,int y,int z)
		{
			l=x;
			b=y;
			h=z;
		}
		void show()
		{
			cout<<"Length= "<<l<<endl;
			cout<<"Breadth= "<<b<<endl;
			cout<<"Height= "<<h<<endl;
		}
		void volume()
		{
		   float v;
	    	v=l*b*h;
		   cout<<"Volume of box "<<v<<endl;
		}
		void volume(float len)
		{
			float v;
			l=b=h=len;
			v=l*b*h;
			cout<<"Volume of cube "<<v<<endl;
		}	
};
int main()
{
	box b1;
	box b2(10,20,30);
	b1.show();
	b2.show();
	b1.volume(6);
	b2.volume();
}

