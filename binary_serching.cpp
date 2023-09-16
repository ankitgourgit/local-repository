#include<stdio.h>
int binaryserch(int arr[],int size,int element)
{
	int mid,low,high;
	low=0;
	high=size-1;
	while(low<=high)
	{
		mid=(low+high)/2;
		if(arr[mid]==element)
		{
			return mid;
		}
		if(arr[mid]<element)
		{
		   low=mid+1;	
		}
		else
		{
		   high=mid-1;
		}
	}
	return -1;
}

int main()
{
	int arr[]={1,5,6,8,10,15};
	int size=sizeof(arr)/sizeof(int);
	int element=6;
	int serchindex=binaryserch(arr,size,element);
	printf("The element %d was found at index %d\n",element,serchindex);
	printf("");
	return 0;
}
