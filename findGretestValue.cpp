#include<stdio.h>
int main()
{
	int a[5],i,max;
	printf("Enter 5 values: \n");
	for(i=0;i<=4;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Greatest value from this array:\n");
	max=a[0];
	for(i=1;i<=4;i++)
	{
		if(max<a[i])
		{
			max=a[i];
			
		}	
	}
	printf("%d\n",max);
}
