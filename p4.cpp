#include <stdio.h>  
  
main()  
{
	int a[10];
	int i,j,t;
	printf("Enter element\n");
	for(i=0;i<=9;i++)
	scanf("%d",&a[i]);
	
	for(i=0,j=9;i<j;i++,j--)
  {
	t=a[i];
	a[i]=a[j];
	a[j]=t;
  } 
	printf("Rev of array\n");
	for(i=0;i<=9;i++)
	 printf("%d\n",a[i]);
}
