#include<stdio.h>
main()
{
	void a();
	a();
	printf("Main");
}
	a()
	{
		printf("a");
		void b();
	    b ();
	    printf("---A---");
	    
	}

	b()
	{
		printf("b");
		void c();
	    c();
		printf("---B---");	
	}
	c(){
		printf("c");
	}

