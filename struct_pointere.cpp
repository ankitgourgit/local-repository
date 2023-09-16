#include<stdio.h>
struct student
{
	int roll;
	char name[20];
	int marks;
};
int main()
{
	struct student stud={101,"Mayank",89};
	struct student *ptr;
	ptr=&stud;
	printf("By using stud pointer:\n");
	
	printf("\nRoll number=%d",ptr->roll);
	printf("\nName=%s",ptr->name);
	printf("\nMarks=%d",ptr->marks);
}

