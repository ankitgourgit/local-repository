#include<stdio.h>
int main()
{
	int *p,a=10;
	p=&a;
	printf("the value of a is %d\n",a);
	printf("the value of p is %d\n",p);
	printf("the address of a is %d\n",&a);
	printf("the address of p is %d\n",&p);
	printf("the value of address a is %d",*(&a));
}
