#include<stdio.h>
int fact(int);
int main()
{
    int n,s;
	printf("enter the value of n\n");
	scanf("%d",&n); 	
	s=fact(n);
	printf("The factorial of %d is %d",n,s);
}
int fact(int a)
{
	int f=1;
	for(int i=1;i<=a;i++)
	{
		f=f*i;	
	}
	return f;
}

