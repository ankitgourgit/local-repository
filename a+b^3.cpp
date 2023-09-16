#include<stdio.h>
int main()
{
	int a,b,value;
	printf("Enter value of a and b");
	scanf("%d%d",&a,&b);
	value=a*a*a+b*b*b+3*a*b*(a+b);
	printf("value = %d",value);
	return 0;
}
