#include <stdio.h>
#include <stdlib.h>

int largest(int arr[],int count)
{
    int i,max;
    max=arr[0];
    for(i=0;i<count;i++)
        if(arr[i]>max)
        max=arr[i];
    return (max);
}
int main()
{

    int arr[]={1,24,25,145,8,-101,300};
    int count=(sizeof(arr)/sizeof(arr[0]));
    printf("largest element is:%d",largest(arr,count));
    return 0;
}
