#include<stdio.h>
void main(){
int a=0,b=0;
printf("Enter the value of a\n");
scanf("%d",&a);
printf("enter the second value of b\n");
scanf("%d",&b);
printf("Values before swapping a=%d, b=%d\n",a,b);
a=a+b;
b=a-b;
a=a-b;
printf("values after swaping a=%d, b=%d\n",a,b);
}
