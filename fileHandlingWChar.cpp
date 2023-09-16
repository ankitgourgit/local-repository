#include<stdio.h>
main()
{
	FILE *fp;
	char ch='a';
	fp=fopen("abc.txt","w");
	fputc(ch,fp);
	fclose(fp);
}
