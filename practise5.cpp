#include<stdio.h>
int main()
{
	float perHeight;
	printf("Enter height of a person: " );
	scanf("%f",&perHeight);
	if(perHeight<150)
	printf("person is drawf");
	else if((perHeight>=150) && (perHeight<165))
	printf("person is of avrage height");
	else if((perHeight>=165) && (perHeight<195))
	printf("person is taller");
	else 
	printf("person is abnormal");
}
