#include<stdio.h>
int main()
{
	int a[3][3][3];
	int i,j,k;
	printf("Enter 8 value in 3*3*3 3d array");
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
	printf("OutPut\n");
		for(i=0;i<=2;i++)
	{
		for(j=0;j<=2;j++)
		{
		    for(k=0;k<=2;k++)
		    {
		      printf("%d",a[i][j][k]);
		    }
		    printf("\n");
		}
		printf("\n\n");
	}
	
}
