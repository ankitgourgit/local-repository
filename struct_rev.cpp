#include<stdio.h>
struct student
{
	int roll;
	char name[20];
	float marks;
};
int main()
{
	struct student s1= {101,"radhe",80.6};
	struct student s2;
	printf("\nEnter roll no : ");
	scanf("%d",&s2.roll);
	printf("Enter name : ");
	scanf("%s",&s2.name);
	printf("Enter marks : ");
	scanf("%f",&s2.marks);
	 
	 printf("\nRoll no.=%d ",s1.roll);
	 printf("\nName=%s",s1.name);
	 printf("\nMarks=%f",s1.marks);
	
	 printf("\nRoll no.=%d ",s2.roll);
	 printf("\nName=%s",s2.name);
	 printf("\nMarks=%f",s2.marks);
}
