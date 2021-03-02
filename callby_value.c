/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
  int num1=100;
  int num2=200;
  printf("value before func %d,%d\n",num1,num2);
  func(num1,num2);
  printf("value after func %d,%d\n",num1,num2);
  

    return 0;
}
void func(int n,int n1){
    n=n+n1;
    n1=n-n1;
    n=n-n1;
    
    
}
