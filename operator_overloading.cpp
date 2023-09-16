#include<iostream>
using namespace std;
class counter
{
	int count;
	public:
		counter()
		{
		  count=0;	
		}
		counter(int x)
		{
			count=x;
		}
		void show()
		{
			cout<<"count="<<count<<endl;
		}
		void operator --()
		{
			count--;
		}
		void operator ++()
		{
			count++;
		}	
};
int main()
{
	counter c1;
	counter c2(5);
	c1.show();
	c2.show();
	c1.operator ++();
	c2.operator --();
	c1.show();
	c2.show();
}
