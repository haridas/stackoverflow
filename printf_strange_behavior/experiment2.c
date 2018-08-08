#include <stdio.h>
int main()
{
   int a=0,b=0,c=0;
   printf ("Enter two numbers");
   scanf("%d%d",&b,&c);
   while (1)
   {
      sleep (1000);
   }
   a=b+c;
   printf("The sum is %d",a);
   return 1;
}

