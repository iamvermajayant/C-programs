#include<stdio.h>
int main()
{
	int num = 30;
	int *ptr = &num;
	printf("%p",&num);
	printf("\n %p",ptr);
	/*
	int mum = 30;
	int *ptr = &num;
	*ptr -> value at ptr - >value of num->30
	ptr -> value of ptr -> address of num
	&ptr -> address of ptr
	*/
	printf("Value of num using ptr = %d",*ptr);
}
