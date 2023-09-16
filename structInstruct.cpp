#include<stdio.h>
#include<string.h>
int main()
{
	struct A
	{
		int a;
		float s;
	};
	struct B
	{
		char n[10];
		struct A x;
	}p;
	p.x.a=30;
	p.x.s=20000;
	strcpy(p.n,"ankit");
	printf("Name=%s\n",p.n);
		printf("Salary=%f\n",p.x.s);
			printf("Age=%d",p.x.a);
}
