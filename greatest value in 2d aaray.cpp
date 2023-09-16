#include<stdio.h>
int main()
{
	int a[3] [4];
	int i,j,max;
	printf("Enter 9 value in 3*4 2d array");
	for(i=0;i<=2;i++)
	{
		for(j=0;j<=3;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("OutPut\n");
	for(i=0;i<=2;i++)
	{
		for(j=0;j<=3;j++)
		{
			printf("%d",a[i][j]);
		}
		printf("\n");
	}
	
	printf("Gretest value from array\n");
	max= a[0][1];
		for(i=0;i<=2;i++)
	{
		for(j=1;j<=3;j++)
		{
			if(max<a[i][j])
			{
				max=a[i][j];
			}
		}
	}
	printf("%d\n",max);
}
