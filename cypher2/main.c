#include <stdio.h>
#include <stdlib.h>

int main()
{

int c;
    printf("enter 1 to enter any message");
    printf("enter 2 to inscript");
    printf("enter 3 to discript");
    printf("enter 4 to show any the message");
    printf("exit");
    printf("enter choice");
    scanf("%d",&c);
    switch(c)
    {
    case 1:mes();

    break;
    case 2:encrypt();
    break;
    case 3:decrypt();
    default:printf("wrong input");
    }

    void mes()
    {
        char str[100];
    printf("enter string");
    gets(str);
    }
  void encrypt()
  {
      int i;
      mes();
      for(i = 0; (i < 100 && str[i] != '\0'); i++)
        str[i] = str[i] + 3;
      printf("\nEncrypted string: %s\n", str);

  }

  void decrypt()
  {
      for(i = 0; (i < 100 && str[i] != '\0'); i++)
        str[i] = str[i] - 3;
      printf("\nDecrypted string: %s\n", str);
  }
    }


}
