#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n,i,*ptr;
	printf("Enter total no. of value :");
	scanf("%d",&n);
	ptr=(int*)malloc(n*sizeof(int));
	printf("\nEnter the values:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",(ptr+i));
	}
	printf("Entered values are:\n");
	for(i=0;i<n;i++)
	{
		printf("%d\n",*(ptr+i));
	}
	free(ptr);
}
