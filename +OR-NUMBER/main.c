#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num;
    printf("enter a number-");
    scanf("%d",&num);
    if(num>0)
        printf("number is positive:%d",num);
    else if(num<0)
        printf("number is negative:%d",num);
    else
        printf("number is neutral:%d",num);

    return 0;
}
