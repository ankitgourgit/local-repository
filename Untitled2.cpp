#include<stdio.h>
int main()
{
	char ch;
	printf("Enter an item");
	scanf("%c",&ch);
	 switch(ch)
	 {
	 	case '':
	 	  printf("This is panipuri");
	 	    break;
	 	case 'bpm':
		  printf("This is bpm");
		    break;  
	 }
}
