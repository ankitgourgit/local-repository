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
	  struct emp z;
	  strcpy(z.n,"charu");
	  z.a=20;
	  z.s=20000;
	  printf("name is %s\n",z.n);
	  printf("age is %d\n",z.a);
	  printf("salary is %f",z.s);

	  
}
