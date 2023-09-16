#include<stdio.h>
int main()
{
	int a[5];
	int i,sum=0;
	printf("Enter 5 values: \n");
	for(i=0;i<=4;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("output:\n");
	for(i=0;i<=4;i++)
	{
		printf("%d\n",a[i]);
		sum=sum+a[i];
	}
		
        printf("The sum of given array is %d",sum);
}
