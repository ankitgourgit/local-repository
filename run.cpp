#include<stdio.h>
int main()
{
	int i;
	float Avg,sum=0;
	for(i=1;i<=10;i++)
	{
		printf("%d\n",i);
		sum=sum+i;
	}
        {
		 printf("sum=%f\n",sum);
        Avg=(sum/10);
        printf("Avg=%f",Avg);
       }
}
