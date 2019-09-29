#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, a = 0, b = 1, c, i;
    printf("Enter the number of terms:\n");
    scanf("%d",&n);

printf("First %d terms of Fibonacci series:\n",n);
    for ( i = 0 ; i < n ; i++ )
    {
       if ( i <= 1 )
          c = i;
       else
       {
          c = a + b;
          a = b;
          b = c;
       }
       printf("%d\n",c);
    }

    return 0;
}
