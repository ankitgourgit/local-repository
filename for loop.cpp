#include<stdio.h>
int main()
{
	int i,m,n;
	printf("Enter m n value :");
	scanf("%d%d",&m,&n);
	for(i=m;i<=n;i=i+m)
	printf("%d\n",i);
	return 0;
}
