#include<iostream>
using namespace std;
class distance
{
   int feet, inch;
   public:
       distance()
	   {
	   	feet=0; 
	   	inch=0;
	   }	
	   distance(int f, int i)
	   {
	   	feet=f;
	   	inch=i;
	   }
	   distance operator+(distance d2)
	   {
	   	distance d3;
	   	d3.feet=feet + d2.feet;
	   	d3.inch=inch + d2.inch;
	   	return d3;
	   }
};
int main()
{
	distance d1(8,9);
	distance d2(10,2);
	distance d3;
	d3=d1+d2;
	cout << "\nTotal Feet & Inches: " << d3.feet << "'" << d3.inch;
	return 0;
}
