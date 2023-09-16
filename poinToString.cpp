#include<stdio.h>
int main()
{
	char n[6]="amita",*p,i;
	p=n;
	i=0;
	while(*(p+i)!='\0')
	{
		printf("%c",*(p+i));
		i++;
	} 
}
