#include<iostream>
using namespace std;
int main()
{
	//basic example
	int a=10;
    int *p=&a;
    cout<<"The value of a is: "<<*(p)<<endl;
   
   //new operator 
    int *ptr= new int(40);
   // delete ptr;
    cout<<"The value at address ptr is "<<*(ptr);
    
}

