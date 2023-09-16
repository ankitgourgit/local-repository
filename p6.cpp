#include<stdio.h>
main()
{
	char ch;
	printf("Enter a character-");
	scanf("%c",&ch);
	if((ch>='A' && ch<='Z') || (ch>='a' && ch<='z'))
	{
		switch (ch)
		{
			case 'A':
			case 'E':	
			case 'I':	
			case 'O':	
			case 'U':	
			case 'a':
			case 'e':	
			case 'i':	
			case 'o':	
			case 'u':	
			printf("%c character is vowel",ch);
			  break;	
			default :
			printf("%c character is consonent",ch);  
		}
	}
	else
	{
	      printf("%c not an alphabet",ch);

	}
}
