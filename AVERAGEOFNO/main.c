#include <stdio.h>
#include <stdlib.h>

void print(int n1,int n2,int n3,double avg);
double avg(int a,int b,int c);
int main()
{
    int n1,n2,n3;
    printf("enter:");
    scanf("%d  %d  %d",&n1,&n2,&n3);

    avg(n1,n2,n3,);
    return 0;
}

double avg(int n1,int n2,int n3)
{

    double sum;
    sum=n1+n2+n3;
    return (sum/3.0);
}
