#include<stdio.h>
main()
{
	float ca1_marks,ca1,ca2,ca2_marks,avg_ca_marks,ca_weightage,mid_term_marks,mid_term,mt_weightage;
	printf("enter the ca1_marks you got out of 30\n");
	scanf("%f",&ca1_marks);
	if(ca1_marks<30)
	{
		printf("\nokay get ready for calculation");
	}
	else
	{
		printf("the entry in not valid");
	}
	ca1=(ca1_marks/30)*100;
	getche();
	printf("\nthe percentage in ca1 is %.2f\n",ca1);

	printf("\nenter the ca2_marks you got out of 30\n");
	scanf("%f",&ca2_marks);
	if(ca2_marks<30)
	{
		printf("\nokay get ready for calculation");
	}
	else
	{
		printf("the entry in not valid");
	}
	ca2=(ca2_marks/30)*100;
	getche();
	printf("\nthe percentage in ca2 is %.2f",ca2);
	
	
	avg_ca_marks=(ca1+ca2)/2;
	ca_weightage=(avg_ca_marks*25)/100;
	getche();
	printf("\n\nyour ca wieghtage is %.2f out of 25",ca_weightage);
	
	printf("\n================================================================================");
	printf("\n================================================================================");
	printf("\nnow it's time to calculate mid-term weightage");
	
	printf("\nenter the mid-term marks you got out of 40");
	scanf("%f",&mid_term_marks);
	if(mid_term_marks<40)
	{
		printf("\nokay get ready for calculation");
	}
	else
	{
		printf("the entry in not valid");
	}
	mid_term=(mid_term_marks/40)*100;
	getche();
	printf("\nthe percentage in ca1 is %.2f\n",mid_term);
	
	mt_weightage=(mid_term*20)/100;
	printf("/nthe mid term weightage is %.2f out of 20\n",mt_weightage);
	
	
	
}
