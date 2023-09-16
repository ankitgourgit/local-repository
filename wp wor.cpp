#include<stdio.h>
main()
{
	void add(int , int);
	int a,b;
	printf("Enter two number: ");
	scanf("%d%d",&a,&b);
	add(a,b);
}
   	void add(int x , int y)
   	{
   	printf("%d",(x+y));
   }
