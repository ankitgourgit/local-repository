#include<stdio.h>
int main()
{
	int n,rem,c,arm=0;
	printf("Enter a number: ");
	scanf("%d",&n);
	c=n;
	while(n>0)
	{
		rem=n%10;
		arm=arm+(rem*rem*rem);
		n=n/10;
	}
	if(c==arm)
	{
		printf("The enter no. is armstrong");
	}
	else
	{
		printf("Not armstrong");
	}
}
