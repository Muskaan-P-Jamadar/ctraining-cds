// creating user defined header file

int add(int a,int b){
return a+b;
}



// including user defined header files into pgm
#include<stdio.h>
#include"add.h"
int main()
{
 int num1,num2;
 printf("enter the 2 nums to add\n");
scanf("%d",&num1);
scanf("%d",&num2);
 int sum =add(num1,num2);
printf("SUM : %d\n",sum);
}
