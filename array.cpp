#include<stdio.h>
main()
{
	int avg,sum=0;
	int i;
	int marks[3];
	for(i=0;i<=2;i++)
	{
	  printf("Enter the marks : ");
	  scanf("%d",&marks[i]); 
   }
   	for(i=0;i<=2;i++)
   {
   	 sum=sum+marks[i];
   }
   	 avg=sum/3;
   	 printf("\navrage marks=%d",avg);
   
}
