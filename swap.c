#include<stdio.h>
void main(){
int a,b,help;
printf("enter the first number\n");
scanf("%d",&a);
printf("enter the second number\n");
scanf("%d" ,&b);
printf("values of a and b before swapping %d %d \n",a,b);
help=a;
a=b;
b=help;
printf("valuesi of a and b after swapping %d %d\n", a,b);
}