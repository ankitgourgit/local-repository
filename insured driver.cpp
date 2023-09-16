#include<stdio.h>
int main()
{
	int age;
	char ms,sex;
	printf("Enter age sex and matrial status");
	scanf("%d%c%c",&age,&sex,&ms);
	
	if((ms=='M') || (ms=='U'&&sex=='M'&&age>30) || (ms=='U'&&sex=='F'&&age>25))
	  printf("Driver is insured");
    else
	  printf("Driver is not insured");   
}
