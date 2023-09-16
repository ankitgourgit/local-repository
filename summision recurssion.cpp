#include<stdio.h>
main()
{
	int summ(int);
	int n,s;
    printf("Enter the value of n: ");
	scanf("%d",&n);
	s=summ(n);
	printf("%d",s);
}
    int summ(int n)
    {
    	int s;
    	if(n==1)
          return(1);
        else
		  s=n+summ(n-1);
		  return(s);
    	
	}
