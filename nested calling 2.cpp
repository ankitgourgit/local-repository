#include<stdio.h>
main()
{
	void a();
	a();
}
	a()
	{
		printf("a");
		void b();
	    b ();
	    
	}

	b()
	{
		printf("b");
		void c();
	    c();	
	}
	c(){
		printf("c");
	}

