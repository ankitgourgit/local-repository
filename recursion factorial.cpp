#include<stdio.h>
main()
{
	int fact(int);
	int n,f;
	printf("Enter the value of n: ");
	scanf("%d",&n);
	f=fact(n);
	printf("%d",f);
}
   int fact(int n)
   {
   	int f; 
   	if(n==1)
   	   return(1);
    else 
      f=n*fact(n-1);
        return(f);
   } 

