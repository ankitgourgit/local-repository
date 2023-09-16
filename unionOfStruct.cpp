#include<stdio.h>
#include<string.h>
int main()
{
	struct A
	{
		int a;
		char d[2];
	};
	struct B
	{
		int b;
		char c[2];
	};
	union x
	{
		struct A p;
		struct B q;
	}v;
	v.p.a=100;
//	v.q.b=300.00;
	strcpy(v.p.d,"ankit");
//	strcpy(v.q.c,"mohit");
	
	printf("%d\n",v.p.a);
//	printf("%d\n",v.q.b);
	printf("%s\n",v.p.d);
//	printf("%s",v.q.c);
}
