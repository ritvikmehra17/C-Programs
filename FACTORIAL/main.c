#include <stdio.h>
#include <stdlib.h>

int main()
{
   int n;
   printf("enter a no");
   scanf("%d",&n);
   int fac=1;
   for(int i=1;i<=n;i++)
   {
       fac=fac*i;
   }
   printf("Factorial is:%d",fac);
    return 0;
}
