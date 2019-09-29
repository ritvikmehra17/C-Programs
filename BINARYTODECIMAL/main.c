#include <stdio.h>
#include <stdlib.h>

int binarytoDecimal(long bnum)
{

    int dnum=0,temp=0,remainder;
    while(bnum!=0)
    {
        remainder=bnum%10;
        bnum=bnum/10;
        dnum=dnum+remainder*pow(2,temp);
        temp++;
    }
    return(dnum);
}
int main()
{

    long bnum;
    printf("enter binary no.");
    scanf("%d",&bnum);

    printf("Decimal form is:%d",binarytoDecimal(bnum));
    return 0;

}
