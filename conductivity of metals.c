#include<stdio.h>
#include<math.h>
int main()

{
	double taw,n,e,sigma,m;
	printf("enter the value of n\n");
	scanf("%lf",&n);
	printf("enter the value of taw\n");
	scanf("%lf",&taw);
	printf("enter the value of e\n");
	scanf("%lf",&e);
	printf("enetr the value of m\n");
	scanf("%lf",&m);
	sigma=(n*e*e*taw)/m;
	printf("the value of sigma is%lf\n",sigma);
	
}
