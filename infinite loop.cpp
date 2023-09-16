#include<stdio.h>
int main()
{
	int i;
	
	for(i=1;;i++)
	if(i<10)
	  printf("%d\n",i);
	else
	  break;
}
