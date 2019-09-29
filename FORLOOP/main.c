#include <stdio.h>
#include <stdlib.h>

int main()
{
    unsigned long long sum=0LL;
    unsigned int count=0;
    printf("\n Enter no.");
    scanf("%u", &count);
    unsigned int i;
    for(i=1;i<=count;++i)
    {
        //tells how many times loop works
        printf("inside loop\n");
        sum=sum +i;
    }

        printf("\n total of the firs %u no is %llu\n", count,sum);
    return 0;
}
