#include<stdio.h>
#include<stdlib.h>
int main()
{
	int *p;
	p=(int *)malloc(sizeof(int));
	printf("Enter an integer value:");
	scanf("%d",p);
	printf("Given value = %d\n",*p);
}
