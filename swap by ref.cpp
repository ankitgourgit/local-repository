#include<stdio.h>
void swapr(int*,int*);
main()
{
	int a=10, b=20;
	swapr(&a,&b);
	printf("\na=%d b=%d",a,b);
}
void swapr(int*x,int*y)
{
	int t;
	t=*x;
	*x=*y;
	*y=t;
}
