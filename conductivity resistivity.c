#include<stdio.h>
int main()

{
	double roh,r,l,sigma,a;
	printf("a= area\nroh= resistivity\nl=length\nsigma=conductivity\nr=resistance ");
	printf("\n\n======================================================================");
	printf("\nenter the value of a");
	scanf("%lf",&a);
	printf("enter the value of roh\n");
	scanf("%lf",&roh);
	printf("enter the value of l\n");
	scanf("%lf",&l);

	r=(roh*l/a);
	getch();
	printf("\nthe value of resistivity is%lf",r);
	printf("\n\n=====================================");
	printf("\nconductivity = 1/resistivity");
	getch();
	sigma=1/r;
	printf("\n\n=========================================");
	printf("\nthe value of conductivity is %lf",sigma);
	
	
}
