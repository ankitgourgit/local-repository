//matrix multiplication
#include<iostream>
using namespace std;
int main()
{
	int a[3][3],b[3][3],c[3][3],i,j;
	cout<<"Enter the element of first array"<<endl;
	for(i=0;i<=2;i++)
	{
		for(j=0;j<=2;j++)
		{
			cin>>a[i][j];
		}
	}
	cout<<"Enter the element of second array"<<endl;
	for(i=0;i<=2;i++)
	{
		for(j=0;j<=2;j++)
		{
			cin>>b[i][j];
		}
	}
	cout<<"Addition of two array:"<<endl;
	for(i=0;i<=2;i++)
	{
		for(j=0;j<=2;j++)
		{
			c[i][j]=a[i][j] * b[i][j];
		}
	}
	cout<<"Result of two array"<<endl;
	for(i=0;i<=2;i++)
	{
		for(j=0;j<=2;j++)
		{
		cout<<c[i][j]<<" ";

		}
	    	printf("\n");

	}
}
