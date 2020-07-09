#include<stdio.h>
main()
{
	int array[100],num,i,position;
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
	printf("enter the position of element wants to be deleted");
	scanf("%d",&position);
	i=position;
	while(i<=num-1)
	{
		array[i-1] = array[i];
		i++;
	}
	num--;
	printf("after deletion the array is: \n");
	for(i=0; i<num; i++)
	{
		printf("%d \n",array[i]);
	}
	return 0;
	
}
