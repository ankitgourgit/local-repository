#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n,i,*ptr;
	printf("Enter total no. of value :");
	scanf("%d",&n);
	ptr=(int*)malloc(n*sizeof(int));
	printf("\nEnter the values:");
	for(i=0;i<n;i++)
	{
		scanf("%d",(ptr));
	}
	printf("\n Enter the updated size of n: ");
	scanf("%d",&n);
	int *ptr1=(int*)realloc(ptr,n*sizeof(int));
	printf("\n previous address:%d, new address:%d",ptr,ptr1);
	printf("\n Entered values are:");
	for(i=0;i<n;i++)
	{
		printf("%d\n",*(ptr1+i));
	}
	free(ptr1);
}
