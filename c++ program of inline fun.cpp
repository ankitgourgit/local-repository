#include<iostream>
using namespace std;

inline int product(int a, int b)
{
	return a*b ;
}
int main()
{
	int a,b;
	cout<<"Enter value of a and b: "<<endl;
	cin>>a>>b;
	cout<<"prouduct will be:"<<product(a,b);
}
