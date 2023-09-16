#include<stdio.h>
#include<string.h>
 main()
{
	struct emp
	{
		char n[10];
		int a;
		float s;
	};
	  struct emp p;
	  printf("enter employee name : ");
	  scanf("%s",p.n);
	  printf("enter employee age : " );
	  scanf("%d",&p.a);
	  printf("enter employee salary : ");
	  scanf("%f",&p.s);
	  printf("%s %d %f",p.n,p.a,p.s);
	  
}
