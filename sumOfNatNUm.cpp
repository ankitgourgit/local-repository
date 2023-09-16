#include<stdio.h>
int main()
{
	int i,sum=0;
	for(i=1;i<=7;i++)
	{
		sum=sum+i;
		printf("%d",i);
	}
	printf("\nsum of n natural no : %d",sum);
}
