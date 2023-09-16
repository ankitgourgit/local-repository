#include<stdio.h>
void sum(int x, int y)
{
	int d;
	d=x+y;
	 printf("The sum of two no. is %d\n",d);
}
int mul(int x ,int y)
{
	int d;
	d=x*y;
	return d;
}
void div(void)
{
	float i,j,k;
	printf("Enter two no.");
	scanf("%f%f",&i,&j);
	k=(i/j);
	printf("The divsion of two no. is %f",k);
}
int main()
{
   int a,b,c,e;
   printf("Enter the value of a and b: ");
   scanf("%d%d",&a,&b);
   sum(a,b);
   e= mul(a,b);
    printf("The multiply of two no. is %d\n",e);
   div();
  
}
