#include<stdio.h>
int main()
{
	void print(char*,int*,float*);
	struct emp
	{
		char n[10];
		int a;
		float s;
	}e={"ramesh",28,40000};
	print(e.n,&e.a,&e.s);
}
void print(char*p,int*z,float*s)
{
	printf("%s\n",p);
	printf("%d\n",*z);
	printf("%f",*s);
}
