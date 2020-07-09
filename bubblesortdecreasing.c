#include<stdio.h>
main()
{
	int a[100],n,j,i,t;
	printf("enter the length of array");
	scanf("%d",&n);
	printf("enter the elements of array");
	for(i=0; i<n; i++)
	{
		scanf("%d",&a[i]);
	}
	printf("the desired array is : \n");
	for(i=0; i<n; i++)
	{
		printf("%d \n",a[i]);
	}
	printf("bubble sorting");
	
	for(i=0; i<n-1; i++)
	{
		for(j=0; j<n-1-i; j++)
		{
			if(a[j]>a[j+1])
			{
				t = a[j];
				a[j] = a[j+1];
				a[j+1] = t;
				
			}
			
			
		}
	}
	for(i=n-1; i>=0; i--)
	printf("%d  \n",a[i]);
	
	
	
	
	
}
