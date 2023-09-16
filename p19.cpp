#include<stdio.h>
int main()
{
	char *p;
	char n[6]="amita";
	p=n;
	while(*(p)!='\0')
	{
		printf("%c",*(p));
		  p++;
	}
}
