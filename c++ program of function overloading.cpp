#include<iostream>
using namespace std;

//volume of cylinder
int volume(double r , int h)
{
	return (3.14*r*r*h);
}
//vol of  cube
int volume(int a)
{
	return(a*a*a);
}
//volume of cubiod
int volume(int l,int b,int h)
{
	return(l*b*h);
}
int main()
{
	cout<<"volume of cylinder "<<volume(3,6)<<endl;
	cout<<"volume of cube "<<volume(3)<<endl;
	cout<<"volume of cubiod "<<volume(2,3,4);
}
	
