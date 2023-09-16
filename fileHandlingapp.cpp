#include<stdio.h>
#include<stdlib.h>
int main()
{
	char data[]="ankit is going to delhi";
	FILE *fp = fopen("ankit.txt","a");
	int i=0;

	while(data[i]!='\0')
	{
		fputc(data[i],fp);
		i++;
	}
}
