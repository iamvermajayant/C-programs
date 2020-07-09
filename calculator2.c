#include<stdio.h>
main()
{
	int a,b,c,ch;
	printf("\n\n==========================");
	printf("\n 1. ADDITION");
	printf("\n 2. SUBTRACTION");
	printf("\n 3. MULTIPLICATION");
	printf("\n 4. DIVISION");
	printf("\n 5. REMAINDER");
	printf("\n 6. GREATER ONE");
	printf("\n 0. EXIT");
	printf("\n=========================");
	printf("\n enter your choice");
	scanf("%d",&ch);
	if (ch<=6 & ch>0)
	{
		printf("enter two numbers" );
		scanf("%d%d ",&a,&b);
			
	}
	switch (ch)
	{
		case 1:
		c=a+b;
		printf("addition: %d",c);
		break;
		case 2:
		c=a-b;	
		printf(" subtraction : %d",c);
		break;
		case 3:
		c=a*b;
		printf(" multiplication : %d",c);
		break;
		case 4:
		c=a/b;
		printf(" Division : %d",c);
		break;
		case 5:
		c=a%b;
		printf(" remainder : %d",c);
		break;
		getch();
		
			
	
	
	
	
	}	
	
	
	
	
	
	
}
