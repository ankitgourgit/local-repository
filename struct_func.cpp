#include<stdio.h>
struct student
{
	int roll;
	char name[20];
};
void displaystudent(struct student);
int main()
{
	struct student s1={101,"Radhe"};
	displaystudent(s1);
}
void displaystudent(struct student s)
{
	printf("Rollno=%d\n",s.roll);
	printf("Name=%s",s.name);
}
