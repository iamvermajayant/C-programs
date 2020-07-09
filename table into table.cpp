#include<stdio.h>
main()
{
	int a,b,n;
	printf("enter the number to get the table");
	scanf("%d",&a);
	
	for (  n = 1; n<=10;n++)
	{
		b = a*n;
		printf("\n %d * %d = %d",a,n,b);
		
		
	}
	
	
	
}
