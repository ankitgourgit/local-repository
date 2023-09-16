#include<stdio.h>
main()
{
	float add(int , float );
	int a;
	float b,x;
	printf("Enter two number :");
	scanf("%d%f",&a,&b);
	x=add(a,b);
	printf("%f",x);
}
    float add(int x , float y)
    {
    	return(x+y);
	}
