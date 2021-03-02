#include <stdio.h>

int main()
{
   int a[100];
   int n,i,sum=0;
   float avg=0;
   printf("enter the size of an array\n");
   scanf("%d",&n);
   for(i=0;i<=n-1;i++){
   printf("Enter the elements of an array");
   scanf("%d",&a[i]);
   }
   for(i=0;i<=n-1;i++){
       sum=sum+a[i];
       
   }
   printf("the sum is:%d\n",sum);
   avg= sum/n;
   printf("The avg is :%f\n",avg);
   
    return 0;
}
