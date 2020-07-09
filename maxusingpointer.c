#include<stdio.h>
main()
{
	int n,a[100],i;
	printf("enter the length of array ");
	scanf("%d",&n);
	printf("enter the elements of array");
	for(i=0; i<n; i++)
	{
	scanf("%d",&a[i]);	
	}
	int *p, l=a[0];
	p=&a;
	for(i=0; i<n; i++)
	{
	if(*p>l)
	l=*p;
	p++;	
   	}
	printf("largest element is \n%d",l);
	
	
	
	
	
	}

