#include<stdio.h>
struct student
{
	int roll;
	char name[20];
	float marks;
};
int main()
{
	struct student s[5];
	int i;
	for(i=0;i<=4;i++)
	{
	printf("\nEnter roll no : ");
	scanf("%d",&s[i].roll);
	printf("\nEnter name : ");
	scanf("%s",&s[i].name);
	printf("\nEnter marks : ");
	scanf("%f",&s[i].marks);
	}
	printf("\nOutput");
	for(i=0;i<=4;i++)
    {	
	  printf("\nRoll no.=%d ",s[i].roll);
	  printf("\nName=%s",s[i].name);
	  printf("\nMarks=%f",s[i].marks);
    }
     printf("\n");
}

