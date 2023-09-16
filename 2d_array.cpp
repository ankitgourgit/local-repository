#include<stdio.h>
int main()
{
	int a[3] [3];
	int i,j;
	printf("Enter 9 value in 3*3 2d array");
	for(i=0;i<=2;i++)
	{
		for(j=0;j<=2;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("OutPut\n");
	for(i=2;i>=0;i--)
	{
		for(j=2;j>=0;j--)
		{
			printf("%d",a[i][j]);
		}
		printf("\n");
	}
	
}
