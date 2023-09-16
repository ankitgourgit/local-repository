#include<stdio.h>
#include<stdlib.h>
int main()
{
	FILE *fp=NULL;
	char ch;
	char str[50];
	fp=fopen("abc.txt","r");
	if(fp==NULL)
	{
     printf("error");
	  exit(1);
    }
   printf("%d",ftell(fp));
   fseek(fp,5,SEEK_SET);
   
	 ch=fgetc(fp);
	 printf("\n%c",ch);
	 
	 fscanf(fp,"%s",str);
	 printf("%s",str);
	 
	 fseek(fp,0,SEEK_END);
	 printf("\n%d",ftell(fp));
   fclose(fp); 
}
