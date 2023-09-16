#include<stdio.h>
int main()
{
	int i,n;
	float s=0.0f;
	printf("Enter a no. upto u want a series\n");
	scanf("%d",&n);
	printf("The series is ");
	for(i=1;i<=n;i++)
	{
		s=s + ((float)1/(float)i);
		printf("%d / %d + ",1,i);
	}
     	printf(" = %f",s);n

}
