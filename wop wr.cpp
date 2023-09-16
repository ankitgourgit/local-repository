#include<stdio.h>
main()
{
	int add(),x;
	x=add();
	printf("%d",x);
}
   int add()
   {
   	int a,b;
   	printf("Enter value of a b");
   	scanf("%d%d",&a,&b);
   	return(a+b);
   }
