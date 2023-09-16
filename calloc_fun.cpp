#include<stdio.h>
#include<stdlib.h>
int main()
{
	int *p,n;
	p=(int *)calloc(2,sizeof(int));
	printf("Enter an integer value:");
	scanf("%d",p);
	printf("Given value = %d\n",*p);
}
