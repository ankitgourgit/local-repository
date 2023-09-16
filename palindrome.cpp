#include<stdio.h>
int main()
{
	int n,rem,c,s=0;
	printf("Enter a number: ");
	scanf("%d",&n);
	c=n;
	while(n>0)
	{
		rem=n%10;
		s=rem+(s*10);
		n=n/10;
	}
	if(c==s)
	{
		printf("The enter no. is palindrome");
	}
	else
	{
		printf("Not Palindrom");
	}
}
