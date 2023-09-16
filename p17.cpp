#include<stdio.h>
int main()
{
	void demo(int *);
	int arr[5]={3,5,7,8,9};
	int i;
	for(i=0;i<5;i++)
	demo (&arr[i]);
}
void demo(int *p)
{
	printf("%d\n",*p);
}
