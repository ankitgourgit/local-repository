#include<stdio.h>
int main()
{
	void swap(int *, int *);
	int a,b;
	printf("Enter the value of a and b =");
	scanf("%d %d",&a,&b);
    swap(&a,&b);
    printf("swapped value of a is %d   %d",a,b);
}
void swap(int *p, int *q)
{
	int t;
	t=*p;
	*p=*q;
	*q=t;
}

