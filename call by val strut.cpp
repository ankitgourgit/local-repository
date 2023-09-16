#include<stdio.h>
main()
{
	void print(char[],float,int);
	struct emp
	{
		char n[5];
		float s;
		int a;
	}e={"hema",300000,30};
	  print(e.n,e.s,e.a);
}
	void print(char b[5],float p,int x)
	{
		printf("%s\n",b);
		printf("%f\n",p);
		printf("%d\n",x);s
    }

