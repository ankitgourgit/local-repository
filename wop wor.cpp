#include<stdio.h>
main()
{
	void add();
	add();
}
    void add()
    {
    	int a,b ;
    	printf("Enter two number: ");
    	scanf("%d%d",&a,&b);
    	printf("%d",(a+b));
	}
