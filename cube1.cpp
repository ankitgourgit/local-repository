#include<stdio.h>
int main()
{
	int b,p,a,s=1;
	printf("Enter base and power :");
	scanf("%d%d",&b,&p);
	for(a=1;a<=p;a++)
	s=s*b;
	printf("%d",s);
}
