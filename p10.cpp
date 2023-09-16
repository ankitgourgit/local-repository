#include<stdio.h>
int main()
{
	char n[6];
	int i;
	printf("enter your name:");
	
	for(i=0;i<5;i++)
	{
		scanf("%c",&n[i]);
		printf("%c",n[i]);
	}
	
}
