#include<stdio.h>
int main()
{
	int cyr;
	printf("Enter a year: ");
	scanf("%d",&cyr);
	if((cyr%400)==0)
	printf("%d is a leap year",cyr);
	else if((cyr%100)==0)
    printf("%d is a not leap year",cyr);
	else if((cyr%4)==0)
    printf("%d is a leap year",cyr) ;
	else
	printf("%d is not leap year",cyr);  
}
