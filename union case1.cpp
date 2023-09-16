#include<stdio.h>
int main()
{
	union u
	{
		int a;
		char c[2];
	}v;
//	v.c[0]=50;
	v.a=512;
	printf("%d\n",v.a);
//	printf("%d\n",v.c[0]);
//	printf("%d",v.c[1]);

}
