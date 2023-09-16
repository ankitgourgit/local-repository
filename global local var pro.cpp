#include<stdio.h>
int a;

void add (void);
 main()
{
	printf("Enter value for global variable A:");
	scanf("%d",&a);
	add();
}
void add (void)
{
	int b;
	printf("Enter value for local variable B: ");
	scanf("%d",&b);
	printf("Addition is %d",(a+b));
}

