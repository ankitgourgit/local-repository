#include<stdio.h>
int main()
{
	int i;
	printf("Enter a no :");
	scanf("%d",&i);
	switch(i)
	{
		case 1:
			printf("Enter no is 1");
			    break;
		case 2:	
		    printf("Enter no is 2");
		        break;
		default:
		   printf("Enter no is not in criterion");        
	}
}
