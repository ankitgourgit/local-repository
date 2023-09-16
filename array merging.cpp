#include<stdio.h>
int main()
{
	int a[5],i;
	printf("Enter 5 values of 1st array:");
	for(i=0;i<=4;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("The value of array is:\n");
	for(i=0;i<=4;i++)
	{
		printf("%d\n",a[i]);
	}
}
