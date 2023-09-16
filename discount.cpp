#include<stdio.h>
int main()
{
	int qun,dis=0;
	float rat,tot;
	
	printf("Enter quantity and rate : ");
	scanf("%d%f",&qun,&rat);
	
	if(qun>1000)
	   dis = 10;
	
	tot=(qun*rat)-(qun*rat*dis/100);
	printf("Total expense =Rs %f",tot);
	return (0);  
}

