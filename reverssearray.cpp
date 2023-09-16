#include<stdio.h>
int main()
{
	int a[5],i;
	printf("Enter 5 values:\n");
	for(i=0;i<=4;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("output\n");
	for(i=4;i>=0;i--)
	{
		printf("%d\n",a[i]);
	}
}
