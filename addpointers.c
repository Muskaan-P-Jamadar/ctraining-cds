#include <stdio.h>

int main()
{
   int a=10;
   int b=20;
   int *p,*q;
   p=&a;
   q=&b;
   int c=0;
   c=*p+*q;
   printf("%d\n",c);
   printf("%u\t %d\n",p,*p);
   printf("%u \t %d\n",q,*q);

    return 0;
}