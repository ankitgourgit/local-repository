#include<stdio.h>
#include<string.h>
int main()
{
	int i,j;
	char n1[6]= "good", n2[8]= "evening", n3[13];
	for(i=0;n1[i]!='/0';i++)
	    n3[i]=n1[i];
	    j=i;
	for(i=0;n2[i]!='/0';i++,j++)    
	    n3[j]=n2[i];
	    strcat("n3",'/0');
	    printf("%s",n3);
}
