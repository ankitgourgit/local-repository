#include<stdio.h>
main()
{
	int num1,num2;
	float result;
	char ch;
	printf("Enter num1:");
	scanf("%d",&num1);
	printf("Enter num2:");
	scanf("%d",&num2);
	printf("choose the opration (+,-,*,/,%): ");
	scanf("%c",&ch);
	
	result=0;
	
	switch (ch)
	{
		    case '+' :
			result=num1+num2;
			  break;
			case '-' :
			result=num1-num2;
			  break;
			case '*' :
			result=num1*num2;
		      break;
			case '/' :
			result=num1/num2;
			  break;
			case '%' :
			result=num1%num2;
			  break;
			default :
			printf("invalid opration\n");  
	}
	printf("result: %d %c %d=%f",num1,ch,num2,result);
}
