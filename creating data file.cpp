#include<stdio.h>
#include<stdlib.h>
int main()
{
	int roll;
	char name[20];
	FILE *fp;
	fp=fopen("mohit.txt","w");
	if(fp=='\0')
	{
		printf("Error in opening creating file");
		exit (0);
	}
	printf("Enter Roll no.:");
	scanf("%d",&roll);
	printf("Enter name:");
	scanf("%s",&name);
	
	fprintf(fp,"%d\t%s\n",roll,name);
	fclose(fp);
}
