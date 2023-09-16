#include<stdio.h>
#include<math.h>
int main()
{
	float p,r,t,ci;
	printf("Enter principle rate time");
	scanf("%f%f%f",&p,&r,&t);
	ci=p*(pow((1+r/100),t))-p;
	printf("compound interst=%f",ci);
	return(0);
	
}
