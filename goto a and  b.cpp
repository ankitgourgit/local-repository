#include<stdio.h>
int main()
{
	int i=1;
	A:
	
		if(i<=20)
	       printf("%d\n",i++);
	    else
	       goto B;
	
		goto A;	  
		B:
}
