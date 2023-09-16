#include<stdio.h>
int main()
{
	int a=10,*p,**z;
	p=&a;
	z=&p;
	printf("%d",&**z);
}
