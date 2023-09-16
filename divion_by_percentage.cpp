#include<stdio.h>
int main()
{
	int per;
	printf("Enter percentage of student :");
	scanf("%d",&per);
	
	if(per>=60)
	  printf("first division");
	else
	  {
	  	if(per>=45)
	  	 printf("second divion");
	  	else
		  {
		  	if(per>=33)
		  	 printf("third division");
		  	else
		  	 printf("fail");
		  } 
	  } 
}
