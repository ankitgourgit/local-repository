#include<stdio.h>
int main()
{
	int i,j;
	for(i=1;i<=16;i++)
	{
		for(j=1;j<=i;j++)
		{
			if(i==1||i==2||i==4||i==7||i==11||i==16)
			{
				printf("*");
			}
		}
		printf("\n");
	}
}
