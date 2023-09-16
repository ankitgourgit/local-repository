#include<stdio.h> 
int main()
{
	int *demo();
	int *x;
	x=demo();
	printf("\n%d",*x);
}
int *demo() 
{
	int a=20,*p;
	p=&a;
	printf("%d",a);
	a++;
	return(&a);
}
