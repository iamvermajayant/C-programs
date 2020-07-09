void f1();
#include<stdio.h>
main()
{
	f1();
	f2();
}
voidf1()
{
	static int i=0;
	i++;
	printf("i=%d\n",i);
	
	
}
