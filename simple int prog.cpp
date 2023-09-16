#include <stdio.h>
int main()
{
	float p,r,t,si;
	printf("Enter principle amount= ");
	scanf("%f",&p);
	printf("Enter rate of intrest= ");
	scanf("%f",&r);
	printf("Enter time of duration= ");
	scanf("%f",&t);
	
	si=(p*r*t)/100;
	printf("The simple intrest is %f",si);

}
