#include<stdio.h>
#include<stdlib.h>
int main()
{
	char data[]="ankit is going to delhi";
	FILE *fp = fopen("ankit.txt","w");
	int i=0;
	if(fp=='\0')
	{
		printf("Error in creating file");
		exit (0);
	}
	while(data[i]!='\0')
	{
		fputc(data[i],fp);
		i++;
	}
}
