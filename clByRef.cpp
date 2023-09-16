#include<stdio.h>
int main()
{
	void demo(int *);
	int a[5]={3,6,9,12,15};
	demo(a);
}
void demo(int *p)
{
	printf("%d",*p);
}
