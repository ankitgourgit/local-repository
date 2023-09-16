#include<stdio.h>
int main()
{
	int age;
	printf("Enter your age: ");
	scanf("%d",&age);
	switch(age)
	{
		case 18 :
			printf("Your are eligible for vote\n");
			   break;
		case 25 :
		    printf("you are eligible for lok sabha\n ");	   
		       break;
		case 30 : 
		    printf("Your are eligible for rajya sabha\n");
		    break;
		default :
		    printf("You are default");	       
	}
}
