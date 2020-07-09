#include<stdio.h>
#include<string.h>
main()
{
	char string1[20],string2[20];
	int a;
	printf("\n enter the string 1");
	gets(string1);
	printf("\n enter the string 2");
	gets(string2);
	a=strcmp(string1,string2);
	if(a==0)
	printf("\n the string is same");
	else
	printf("\n the strings are not same");
	return 0;
	
	
	
	
	
	
	
	
}
