#include<Stdio.h>
#include<stdlib.h>
main()
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
   while(!feof(fp))
   {
   	fgets(str,5,fp);
   	printf("%s",str);
   }
   fclose(fp);
}
