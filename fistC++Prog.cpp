#include<iostream>
using namespace std;
int main()
{
	float num1, num2, sum, avg ;
	cout<<"Enter two numbers: ";
	cin>>num1;
	cin>>num2;
	
	sum=num1+num2;
	avg=sum/2;
	
	cout<<"sum = " <<sum <<"\n";
	cout<<"avg = " <<avg <<"\n";
	return 0;
}
