#include<stdio.h>
int main()
{
	int i;
	printf("Enter either 1 or 0 :");
	scanf("%d",&i);
	
	if(i==1)
	  printf("good");
	else
    {
	    if(i==0)
	       printf("bad");
	    else
		   printf("Better");   
    }
}
