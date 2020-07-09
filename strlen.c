#include<stdio.h>
#include<string.h>
main()
{
char a[100];
gets(a);

int i=0,c=0;
while(a[i]!=NULL)
{
	c++;
	i++;
}
printf("%d",c);
	
	
}
