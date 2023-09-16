#include<stdio.h>
int main()
{
	int i,j;
	char c ='A';
	for(i=1;i<=3;i++)
	{
		for(j=1;j<=3;j++)
		   printf("%c\t",c++);
		   printf("\n");
	}
}
