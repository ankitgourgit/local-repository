#include<stdio.h>
int main()
{
	int i,f=1,n;
	printf("Enter value ");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{
		f=f*i;
	}
     	printf("The factorial of given no is %d\n",f);

}
