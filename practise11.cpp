#include<stdio.h>
int main()
{
	int swapv(int*,int*);
	int a=10 , b=20 ;
	swapv(&a,&b);
	printf("a=%d\n b=%d",a,b);
}
int swapv(int *x , int *y)
{
	int t;
	t=*x;
	*x=*y;
    *y=t;
    return t;
}
