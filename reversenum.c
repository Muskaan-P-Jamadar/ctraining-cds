#include<stdio.h>
void main()
{
int num,digit=0,rev=0;
printf("enter the number\n");
scanf("%d", &num);
printf("number before reversing %d\n",num);
while(num!=0){
digit = num%10;
rev = rev * 10 + digit;
num = num/10;
}
printf("reverse of a number is %d\n",rev);
}