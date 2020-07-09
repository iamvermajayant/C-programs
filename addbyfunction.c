#include<stdio.h>
int add (int x, int y);
int minus (int j, int i);
main()
{
	int a,b ,sum=0,diff=0;
	printf("enter any two values of a & b");
	scanf("%d %d",&a,&b);
	sum= add (a,b);
	printf("sum is %d  ",sum);
	diff= minus (a,b);
 	printf("minus is %d ",diff);
}
	int add (int x , int y)
	{
	int res;
	res= x+y;
	return res;
	
	
	
}
	int minus (int j , int i)
	{
	int res;
	res= j-i;
	return res;
	
	
	
}
