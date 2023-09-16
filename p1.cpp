#include<stdio.h>
int main()
{
	float avg;
	int i,sum=0;
	int marks[5];
	for(i=0;i<=4;i++)
	{
		printf("Enter marks=");
		scanf("%d",&marks[i]);
	}
	for(i=0;i<=4;i++)
        sum=sum + marks[i];
		
	avg=sum/5;
	printf("%f",avg);
}
