#include<stdio.h>
int main()
{
	int calsum(int,int,int);
	int a,b,c,sum;
	printf("Enter the value of a,b,c\n");
	scanf("%d%d%d",&a,&b,&c);
	
	sum = calsum(a,b,c);
	
	printf("The sum will be %d ",sum);
}
 int calsum(int x,int y,int z)
{
	int d;
	d=x+y+z;
	return d;
}
