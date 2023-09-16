#include<stdio.h>
main()
{
	void a();
	printf("i m in main fun   ");
	a();
}
 void a()
 {
 	printf("i m in a fuction ");
 	main();
 }
