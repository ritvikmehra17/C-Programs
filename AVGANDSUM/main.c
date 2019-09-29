#include <stdio.h>
#include <stdlib.h>

int main()
{
   int grades[10];
  float sum=0;//if here we write long sum
   float average=0.0f;
   printf("\n enter 10 grades\n");
   for(int i=0;i<10;++i)
   {

       printf("%2u.",i+1);
       scanf("%d", &grades[i]);
       sum+=grades[i];

   }
   printf("sum is:%0.2f\n", sum);
   average=sum/10;//then here avg=(float)sum/10
   printf("\n average is:%0.2f\n",average);
   return 0;
}
