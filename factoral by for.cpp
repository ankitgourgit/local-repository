#include<stdio.h>
void fact()
{
	int f=1,n,i;
	printf("Enter value of n");
	scanf("%d",&n);
	 for(i=1;i<n;i++)
	     f=f*i;
	printf("%d",f);     
}
  int main()
  {
  	fact();
  }
