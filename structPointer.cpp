#include<stdio.h>
main()
{
	struct emp
	{
		char n [7];
		int a;
		float s;
	}e={"Ankit",28,25000},*p,a;
	p=&e;
	printf("%s\n%d\n%f",p->n,p->a,p->s);
}
