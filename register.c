#include<stdio.h>
main()
{
	register int x= 5;
	printf("value of xis %d \n",x);
	int y;
	y= ++x;
	printf("value of x is %d \n",x);
	printf("value of y is %d\n",y);
	--x;
	printf("value of y is %d \n",y);
	printf("value of x is %d \n",x);
	y= x+5;
	printf("value of y is %d \n",y);
		
	
	
}
