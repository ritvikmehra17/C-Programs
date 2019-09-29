#include <stdio.h>
#include <string.h>

int main()
{
    char mystring[]="my name is rv";
    char temp[50];
    strncpy(temp,mystring,sizeof(temp)-1);
    printf("string is:%s",temp);
    return 0;
}
