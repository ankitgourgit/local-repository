#include<stdio.h>
#include<stdlib.h>
#include<string.h>
main()
{
	FILE *fp=NULL;
	char str[50];
	int i;
	fp=fopen("abc.txt","w");
	
	if(fp==NULL)
	{
		printf("error");
		exit(1);
	}
	printf("Enter the string: ");
	gets(str);
	for(i=0;i!=strlen(str);i++)
	fputc(str[i],fp);
	fclose(fp);
}
