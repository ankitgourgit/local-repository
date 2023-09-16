#include<stdio.h>
int main()
{
	void *v;
	int a =10;
	char c ='A';
	float f=45.5;
	v=&a;
    printf("%d\n",*(int*)v);
    v=&c;
    printf("%c\n",*(char*)v);
	v=&f;
    printf("%f",*(float*)v);
}
