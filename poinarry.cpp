#include<stdio.h>
int main()
{
	char n[6]="amita",*p;
	p=n;
	while(*(p)!='\0')
	{
		printf("%c",*p);
		p++;
	} 
}
