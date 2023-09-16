#include<Stdio.h>
#include<stdlib.h>
main()
{
	FILE *fp=NULL;
	char ch;
	fp=fopen("abc.txt","r");
	if(fp==NULL)
	{
		printf("error");
		exit(1);
	}
	ch=fgetc(fp);
	printf("%c",ch);
	fclose(fp);
}
