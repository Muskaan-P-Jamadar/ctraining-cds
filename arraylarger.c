/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
  int arr[10];
  int big=0;
  printf("enter the numbers\n");
  for (int i=0;i<10;i++){
      scanf("%d",&arr[i]);
      
  }
  for(int i=0;i<10;i++){
      if(arr[i]>big)
      big=arr[i];
      
  }
  printf("the largest among the 10 numbers is %d\n",big);
  
  return 0;
}
