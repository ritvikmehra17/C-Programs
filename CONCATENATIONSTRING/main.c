#include <stdio.h>
#include <stdlib.h>

int main()
{
   char str1[50], str2[50], i, j;
   printf("\nEnter first string: ");
   scanf("%s",str1);
   printf("\nEnter second string: ");
   scanf("%s",str2);

   for(i=0; str1[i]!='\0'; ++i);

   /* This loop would concatenate the string str2 at
    * the end of str1
    */
   for(j=0; str2[j]!='\0'; ++j, ++i)
   {
      str1[i]=str2[j];
   }
   // \0 represents end of string
   str1[i]='\0';
   printf("\nOutput: %s",str1);

   return 0;
}
