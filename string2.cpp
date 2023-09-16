#include<stdio.h>
main()
{
	int i;
	char n[12];
	printf("enter your name: ");
	  for(i=0;i<12;i++)
	{  
    scanf("%c",&n[i]);
    printf("%c",n[i]);
    }
}
