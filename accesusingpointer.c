#include <stdio.h>
#include <string.h>
int main()
{
     char s1[10];
     gets(s1);
     char s2[10];
     gets(s2);
     strcat(s1,s2);
     printf("Output string after concatenation: %s", s1);
     return 0;
}
