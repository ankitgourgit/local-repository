#include<stdio.h>
int main()
{
	float a1,a2,a3,a4,a5,avg;
	printf("Enter marks of five subject");
    scanf("%f%f%f%f%f",&a1,&a2,&a3,&a4,&a5);
	
	avg=(a1+a2+a3+a4+a5)/5;
	printf("avg=%f",avg);
}
