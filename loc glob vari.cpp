#include<stdio.h>
int fun();

int var = 10;     //global variable 

int main()
{
	int var = 3;
	printf("%d\n",var);
	fun();       //calling a function
	return 0;
}
int fun()
{
	printf("%d",var); 
}
