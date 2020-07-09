#include<stdio.h>
main()
{
	int array[100],num,i,position,element;
	printf("enter the length of array");
	scanf("%d",&num);
	printf("enter the elements of array");
	for(i=0; i<num; i++)
	{
		scanf("%d",&array[i]);
	}
	printf("the desired array is : \n");
	for(i=0; i<num; i++)
	{
		printf("%d \n",array[i]);
	}
	printf("enter the elements to be inserted ");
	scanf("%d",&element);
	printf("enter the position");
	scanf("%d",&position);
	i = num-1;
	while(position-1<=i)
	{
		array[i+1]=array[i];
		i--;
	}
	array[position-1]=element;
	
	printf("\n after insertion array is ");
	for(i=0; i<num; i++)
	{
		printf("%d",array[i]);
	}
	
	return(0);
	
}
