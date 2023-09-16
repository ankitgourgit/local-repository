#include<stdio.h>
int main()
{
	int square(int);
	int a,b;
	printf("Enter any value:\n");
	scanf("%d",&a);
	
	b= square(a);
	printf("The value of b will be %d",b);
}
int square(int x)
{
	int y;
	y = x*x;
	return y;
}
