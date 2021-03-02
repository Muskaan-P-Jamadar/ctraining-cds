#include <stdio.h>

int main()
{
   int a[3]={22,22,22};
   int *p=0;
   p=&a;
   int c=0;
   
   for(int i=0;i<3;i++){
       c=c+*(p+i);
       
   }
   printf("%d\n",c);

    return 0;
}
