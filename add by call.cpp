#include<stdio.h>
 main()
{
	void add();
	add();
}
void add()
{
	int a,b,sum;
	printf("Enter value of a and b: " );
	scanf("%d%d",&a,&b);
	sum=a+b;
	printf("%d",sum);
}

