#include <stdio.h>
int main()
{
	int l,b,a;
	printf("Enter lenght in meters: ");
	scanf("%d",&l);
	printf("Enter breadth in meters: ");
	scanf("%d",&b);
	a=l*b;
    printf("The area of rectangle is %d sq meters",a);
	return(0);
}
