#include<stdio.h>
main()
{
	void a(),b(),c() ;
	c();
	b();
	a();
}
   void a()
{
	printf(" i am A");
}
   void c()
{
   printf(" i am c");
}
   void b()
{
	printf(" i am b");
}   
