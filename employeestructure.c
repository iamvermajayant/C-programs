#include<stdio.h>
int i;
struct employee
{
	char name[50];
	int salary;
	float bonus;
}j[3];
main()
	{
	printf("enter the information");
	printf("======================================");
	for(i=0;i<2;i++)
	{
	
	printf("\n\t\tenter the name ");
	scanf("%s",j[i].name);
	printf("\t\tenter the salary");
	scanf("%d",&j[i].salary);
	printf("\t\tenter the bonus");
	scanf("%f",&j[i].bonus);
	}
	for(i=0;i<2;i++)
	{
	printf("\n=====displaying information=====\n");
	printf("name:");
	printf("%s\n",j[i].name);
	printf("%d\n",j[i].salary);
	printf("%f",j[i].bonus);
	}
	
	
	
	
	
	
}
