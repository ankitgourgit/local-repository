#include<stdio.h>
int main()
{
	int a[3][3][3];
	int i,j,k,n;
	printf("Enter the elements of  3d array:\n");
	for(i=0;i<=2;i++)
	{
		for(j=0;j<=2;j++)
		{
			for(k=0;k<=2;k++)
			{
				scanf("%d",&a[i][j][k]);
			}
		}
	}
	printf("The 3D array :\n");
		for(i=0;i<=2;i++)
	{
		for(j=0;j<=2;j++)
		{
			for(k=0;k<=2;k++)
			{
				printf("%d\t",a[i][j][k]);
			}
				printf("\n");
		}
		printf("\n");
	}
	printf("\n");
}


