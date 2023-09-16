#include<stdio.h>
int main()
{
    int caldiv(int, int);
	int a,b,Division;
	printf("Enter the value of a b");
	scanf("%d%d",&a,&b);
	Division=caldiv(a,b);
	printf("The division of a and b is %d",Division);
}
int caldiv(int x ,int y)
{
	int d; 
	d=(x/y);
	return d;
}

