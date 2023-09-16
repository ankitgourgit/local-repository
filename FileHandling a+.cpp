#include<stdio.h>
#include<stdlib.h>
int main()
{
	FILE *fp=NULL;
	char ch;
	fp=fopen("abc.txt","a+");
	if(fp==NULL)
	{
		printf("error");
		exit(1);
	}
	fputs("this is good",fp);
	rewind(fp);
	while(!feof(fp))
	{
		ch=fgetc(fp);
		printf("%c",ch);
	}
	fclose(fp);
}
