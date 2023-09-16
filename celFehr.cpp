#include<iostream>
using namespace std;
int main()
{
	float celcius,fehr;
	cout<<"Enter the temp in celcius:";
	cin>>celcius;
	fehr=((9*celcius)/5+32);
	cout<<"Temp in fehrnite:"<<fehr;	
}
