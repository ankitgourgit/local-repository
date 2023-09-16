#include<stdio.h>
#include<stdlib.h>
int main()
{
	FILE *fp=NULL;
	char ch;
	fp=fopen("abc.txt","r");
	if(fp==NULL)
	{
		printf("error");
		exit(1);
	}
	 fseek(fp,5,SEEK_SET);
	 ch=fgetc(fp);
	 printf("%c",ch);
	 
	 fseek(fp,-2,SEEK_CUR);
	 ch=fgetc(fp);
	 printf("%c",ch);
    
    fseek(fp,-3,SEEK_END);
	 ch=fgetc(fp);
	 printf("%c",ch);
	 fclose(fp);
}
