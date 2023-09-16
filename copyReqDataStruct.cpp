#include<stdio.h>
#include<string.h>
 main()
{
	struct emp
	{
		char n[10];
		int a;
		float s;
	}e{"ajay",32,15000};
	  struct emp z;
	  z.a=e.a;
	  z.s=e.s;
	  strcpy(z.n , e.n);
	  printf("name is %s\n",z.n);
	  printf("age is %d\n",z.a);
	  printf("salary is %f\n",z.s); 
	  
}
