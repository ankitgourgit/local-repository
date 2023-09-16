#include<stdio.h>
int main()
{
	int a[5],i,b[5],c[10],j=0,temp;
	printf("Enter 5 values of 1st array:");
	for(i=0;i<=4;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("The value of 1st array is:\n");
	for(i=0;i<=4;i++)
	{
		printf("%d\n",a[i]);
	}
	
	//second
	printf("Enter 5 values of 2nd array:");
	for(i=0;i<=4;i++)
	{
		scanf("%d",&b[i]);
	}
	printf("The value of 2nd array is:\n");
	for(i=0;i<=4;i++)
	{
		printf("%d\n",b[i]);
	}
    for(i=0;i<=4;i++)
    {
    	c[i] = a[i];	
	}
	for(i=5;i<=9;i++)
	{
		c[i] = b[j];
		j++;
	}
	for(i=0;i<=9;i++)
	{
	printf("%d\n",c[i]);
    }
   for(i=0;i=9;i++)
    {
			
	for(i=0;i<=4;i++)
	{
		for(j=i+1;j<=5;i++)
		{
			if(c[j] < c[i])
			temp=c[i];
			c[i]=c[j];
			c[j]=temp;
		}
	}

}
		printf("sorted array\n");
	for(i=0;i<=9;i++)
	{
		printf("%d\n",c[i]);
	}
}
