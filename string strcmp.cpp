#include<stdio.h>
#include<string.h>
int main()
{
	char n[6]= "india",s[6]= "india",c;
	c=strcmp(n,s);
	if(c==0)
	printf("same");
	else
	printf("not same");
}
