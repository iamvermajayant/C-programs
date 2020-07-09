#include<stdio.h>
main()
{
	int n,z;
	printf("enter whose bonus you want to calculate");
	scanf("%d",&z);
	switch(z)
	{
		case 1:
		printf("enter the male salary ");
		scanf("%d",&n);
		if(n>=10000)
		printf("the bonus is 1000");
		else if(n<10000&&n>5000)
		printf("the bonus is 500");
		else
		printf("nikal lawde");
		break;
		case 2:
		printf("enter the female salary");
		scanf("%d",&n);
		if(n>10000)
		printf("the bonus is 2000");
		else if(n<10000&&n>5000)
		printf("the bouns is 1000");
		break;
				
		
		
		
		
		
	}
	
	
	
	
	
	
	
}
