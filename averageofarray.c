#include<stdio.h>
main()
{
	int a[100],i,n,sum=0,avg=0;
	printf("enter the length of array ");
	scanf("%d",&n);
	printf("enter the elements of array");
	for(i=0; i<n; i++)
	{
	scanf("%d",&a[i]);	
	}
	for(i=0; i<n; i++)
	{
	
	sum=sum+a[i];
   }
   avg = sum/n;
	printf("the sum of array is \n%d",sum);
	printf(" \nthe avg of array is%d",avg);
	
	
	
	
}

