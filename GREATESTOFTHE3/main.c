#include <stdio.h>
#include <stdlib.h>

int main()
{
   int a,b,c;
   printf("enter 3 number\n");
   scanf("%d\n%d\n%d",&a,&b,&c);
   if((a>b)&&(a>c))
    printf("a is greatest:%d",a);
   if((b>a)&&(b>c))
    printf("b is greatest:%d",b);
   if((c>a)&&(c>b))
    printf("c is greatest:%d",c);

    return 0;
}
