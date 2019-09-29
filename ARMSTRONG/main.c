#include <stdio.h>
#include <stdlib.h>

int main()
{
   int n,d=0,sum=0,copy;
   printf("enter a no.");
   scanf("%d",&n);
   copy=n;
   for(;n>0;)
   {
      d=n%10;
      sum=sum+(d*d*d);
      n=n/10;
   }
   if(sum==copy)
    printf("%d is a armstrong no.",copy);
   else
    printf("%d is not a armstrong no.",copy);

    return 0;
}
