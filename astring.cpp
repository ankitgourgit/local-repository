#include<stdio.h>
#include<string.h>
int main()
{
	void demo(int[]);
	int a[5]= {1,2,3,4,5};
	demo(a);
}
void demo(int p[])
{
int i;
for(i=0;i<5;i++)
printf("%d\n",p[i]);
}
