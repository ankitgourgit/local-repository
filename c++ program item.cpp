#include<iostream>
using namespace std;

class item
{
	int number;
	float cost;
	
	public :
		void getdata(int a , float b);
		//Function define inside the class
		void putdata(void)
		{
			cout<<"Number"<<number<<endl;
			cout<<"Cost"<<cost<<endl<<endl;
		}	
};
void item :: getdata(int a, float b)
{
	number=a;
	cost=b;
}

int main()
{
	item x;
	cout<<"Object X"<<endl;
	x.getdata(100, 299.5);
	x.putdata();
	
	item y;
	cout<<"Object Y"<<endl;
	x.getdata(200, 399.5);
	x.putdata();
	return 0;
}
