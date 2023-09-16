#include<stdio.h>
int main()
{
   void display(int*);
	int i;
	int marks[]={50,55,60,65,70};
	
	for(int i=0;i<5;i++)
	
	display (&marks[i]);
}
void display(int* m)
{
	printf("%d\n",*m);
}
