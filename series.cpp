#include<stdio.h>
int main()
{
	int num,i;
	float sum=0.0f;
	printf("Input number:\n");
	scanf("%d",&num);
	printf("The series is:");
	for(i=1;i<=num;i++)
	{
	  sum=sum+((float)1/(float)i);
	  printf("%d/%d+\t",1,i);
    }
   printf(" =%f",sum);
}
