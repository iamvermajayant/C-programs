#include <stdio.h>

#include <string.h>

 main()
{
   char s[10],temp;
   int i,len;
   
   printf("Enter String : ");
   scanf("%s",s);
   
   len=strlen(s)-1;
   
   for(i=0;i<strlen(s)/2;i++)
   {
      temp=s[i];
      s[i]=s[len];
      s[len--]=temp;
   }
   printf("\nReverse string :%s",s);
   getch();
}
