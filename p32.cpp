#include<stdio.h>
int fact(int);
int main()
{
    int n,s,i;
	printf("enter the value of n");
	scanf("%d",&n); 	
	s=fact(n);
	printf("The factorial is %d",s);
}
int fact(int a)
{
	int f=1,n;
	for(int i=1;i<=n;i++)
	{
		f=f*i;	
	}
	return (f);
}

