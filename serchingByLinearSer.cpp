#include<stdio.h>
int linearserch(int arr[],int size,int element)
{
	int i;
	for(i=0;i<size;i++)
	{
		if(arr[i]==element)
		{
			return i;
		}

	}	
	return -1;
}

int main()
{
	int arr[]={1,5,6,8,10,15,4};
	int size=sizeof(arr)/sizeof(int);
	int element;
	printf("Enter an element from array=");
	scanf("%d",&element);
	int serchindex=linearserch(arr,size,element);
	printf("The element %d was found at index %d\n",element,serchindex);
	printf("");
	return 0;
}
