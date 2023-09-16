#include<stdio.h>
int main()
{
	float gs,ns,bs,ta,pf,da;
	printf("Enter the basic salary:");
	scanf("%f",&bs);
	ta=(10*bs)/100;
	pf=(7.8*bs)/100;
	da=500;
	gs=bs+ta+da;
	ns=gs-pf;
	printf("The gross salary will be =%f\n",gs);
	printf("The net salary will be =%f",ns);
}
