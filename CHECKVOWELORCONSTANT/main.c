#include <stdio.h>
#include <stdlib.h>

int main()
{
    char ch;
    int r;
    printf("enter a character\n");
    scanf("%c",&ch);
    if(ch=='a'||ch=='A'||ch=='e'||ch=='E'||ch=='i'||ch=='I'
    		||ch=='o'||ch=='O'||ch=='u'||ch=='U')
    {
        r= 1;
    }
    if(r==1)
        printf("%c is vowel",ch);
    else
        printf("%c is constant",ch);

return 0;
}
