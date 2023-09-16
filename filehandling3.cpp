#include<stdio.h>
#include<stdlib.h>
#include<string.h>
main()
{
	FILE *fp=NULL;
	char str[50];
	char ch='s';
	int a=10;
	fp=fopen("abc.txt","w");
	
	if(fp==NULL)
	{
		printf("error");
		exit(1);
	}
	printf("Enter the string: ");
	gets(str);
	fprintf(fp,"%s\n %c\n %d",str,ch,a);
	fclose(fp);
}
