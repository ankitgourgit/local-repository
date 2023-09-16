#include<stdio.h>
#include<string.h>
int main()
{
	char n1[6]="india",n2[6]="india";
	int l1,l2,i,f=0;
	l1=strlen(n1);
	l2=strlen(n2);
      if(l1==l2)
       {
      	for(i=0;n1[i]!='/0';i++)
      	  if(n1[i]=n2[i])
      	     f=1;
           else
          {
			 f=0;
            break;
          }
       }
	  if(f==1)
	   printf("same");
	  else
	  printf("not same");
}
