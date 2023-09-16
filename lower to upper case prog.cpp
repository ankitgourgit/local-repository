#include <stdio.h>
int main()
{
	char ch;
	printf("Enter alower case letter: ");
	scanf("%C",&ch);
	ch=ch-32;
	printf("Result = %c",ch);
	return(0);	
}

