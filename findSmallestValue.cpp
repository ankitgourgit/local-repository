#include<stdio.h>
int main()
{
	int a[5],i,min;
	printf("Enter 5 values: \n");
	for(i=0;i<=4;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("smallest value from this array:\n");
	min=a[0];
	for(i=1;i<=4;i++)
	{
		if(min>a[i])
		{
			min=a[i];
			
		}	
	}
	printf("%d\n",min);
}
