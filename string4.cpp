#include<stdio.h>
#include<string.h>
main()
{
	int l;
	char n[10];
    printf("Enter the name: ");
    gets(n);
    l=strlen(n);
    printf("your name is %d",l);
    return(0);
}
