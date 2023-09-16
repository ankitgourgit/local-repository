#include<stdio.h>
int main()
{
	void demo(int *);
	int a[5]={3,6,9,12,15},i;
	for(i=0;i<5;i++)
	demo(&a[i]);
}
void demo(int *p)
{
	printf("%d\n",*p);
}
