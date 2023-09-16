#include<stdio.h>
int main()
{
	int a[5];
	int i;
	printf("Enter 5 values: \n");
	for(i=0;i<=4;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("output:\n");
	for(i=0;i<=4;i++)
	{
		printf("The values are %d",i);
	}
}
