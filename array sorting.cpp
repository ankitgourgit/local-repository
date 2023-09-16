#include<stdio.h>
int main()
{
	int i,j,temp;
	int a[5]={1,4,2,9,3};
	for(i=0;i<=4;i++)
	{
		for(j=i+1;j<=5;i++)
		{
			if(a[j]<a[i])
			temp=a[i];
			a[i]=a[j];
			a[j]=temp;
		}
	}
	printf("sorted arrey %d",a[i]);
}
