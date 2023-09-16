#include<stdio.h>
#include<stdlib.h>
#include<string.h>
main()
{
	FILE *fp=NULL;
	char str[50];

	fp=fopen("abc.txt","w");
	
	if(fp==NULL)
	{
		printf("error");
		exit(1);
	}
	printf("Enter the string: ");
	gets(str);
	fputs(str,fp);
	fclose(fp);
}
