#include<stdio.h>
int main()
{
	void *v[3];
	int i=1;
	char c;
	float f;
	v[0]=&i;
	printf("%d",*(int*)v[i]);
}
