#include<stdio.h>
int main()
{
	
	void *v[3];
	int a[3],i;
	for(i=0;i<3;i++)
	{
	v[i]=&a[i];
    printf("%d\n",*(int*)v[i]);
    }
}
