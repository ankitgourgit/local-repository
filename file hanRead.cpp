#include<stdio.h>
#include<stdlib.h>
int main()
{
	char ch;
	FILE *fp = fopen("ankit.txt","r");

	while(1)
	{
		ch=fgetc(fp);
		if(ch==EOF)
		{
			break;
		}
		printf("%c",ch);
	}
}
