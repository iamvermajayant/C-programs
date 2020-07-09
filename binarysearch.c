#include <stdio.h>
 
int main()
{
   int c, beg, end, middle, n, search, array[100];
 
   printf("Enter number of elements\n");
   scanf("%d",&n);
 
   printf("Enter %d integers\n", n);
 
   for (c = 0; c < n; c++)
      scanf("%d",&array[c]);
 
   printf("Enter value to find\n");
   scanf("%d", &search);
 
   beg = 0;
   end = n - 1;
   middle = (beg+end)/2;
 
   while (beg <= end) 
	{
      if (array[middle] < search)
         beg = middle + 1;    
      else if (array[middle] == search) 
		{
         printf("%d found at location %d.\n", search, middle+1);
         break;
      }
      else
         end = middle - 1;
 
      middle = (beg + end)/2;
   }
   if (beg > end)
      printf("Not found! %d isn't present in the list.\n", search);
 
   return 0;  
}
