#include<stdio.h>
int main()
{
	int a[3][3],b[3][3],c[3][3],i,j;
	printf("Enter the element of first array\n");
	for(i=0;i<=2;i++)
	{
		for(j=0;j<=2;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("Enter the element of second array\n");
	for(i=0;i<=2;i++)
	{
		for(j=0;j<=2;j++)
		{
			scanf("%d",&b[i][j]);
		}
	}
	printf("Addition of two array\n");
	for(i=0;i<=2;i++)
	{
		for(j=0;j<=2;j++)
		{
			c[i][j]=a[i][j] + b[i][j];
		}
	}
	printf("Additon result of two array\n");
	for(i=0;i<=2;i++)
	{
		for(j=0;j<=2;j++)
		{
			printf("%d\t",c[i][j]);

		}
	    	printf("\n");

	}
}
