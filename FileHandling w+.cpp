#include<stdio.h>
#include<stdlib.h>
int main()
{
	FILE *fp=NULL;
	char str[30];
	char ch;
	fp=fopen("abc.txt","w+");
	if(fp==NULL)
	{
	  printf("error");
	  exit(1);
	}
	fputs("many",fp);
	rewind(fp);
	
	while(!feof(fp))
	{
		ch=fgetc(fp);
		printf("%c",ch);
		
	}
	fclose(fp);
}
