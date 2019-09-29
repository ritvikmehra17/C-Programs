#include <stdio.h>
#include <stdlib.h>

int main()
{
    int count,temp,i,j,n[30];
    printf("enter count");
    scanf("%d",&count);
    printf("enter array elements");
    for(i=0;i<count;i++)
    scanf("%d",&n[i]);


    for(i=count-2;i>0;i--)
    {
        for(j=0;j<=i;j++)
        {
            if(n[j]>n[j+1])
            {
                temp=n[j];
                n[j]=n[j+1];
                n[j+1]=temp;
            }
        }
    }
    printf("sorted elements are\n");
    for(i=0;i<count;i++)
        printf("%d\n",n[i]);
    return 0;
}
