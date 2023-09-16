#include<stdio.h>
int main()
{
	int age,marks;
	printf("Enter your age: ");
	scanf("%d",&age);
	printf("Enter your marks: ");
	scanf("%d",&marks);
	switch(age)
  {
    case 3:
    	printf("your age is 3\n");
    	  switch(marks)
    	  {
    	  	case 45:
    	  		printf("your marks is 45");
    	  		    break;
    	  	default:
			    printf("your marks is not 45");	
		  }
    	   break;
    case 13:
	    printf("your age is 13");
		    break;
	case 23:
	    printf("your age is 23");	
		    break;
	default:
	    printf("your age is 3,13,13");
		    break;
  }
    return(0);
    
}
