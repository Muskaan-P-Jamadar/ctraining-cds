/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
   
   func();
    return 0;
}
func(){
    int n,j,k=1;
    printf("enter the rows\n");
   scanf("%d",&n);
   for(int i=1;i<=n;i++){
       for(int j=1;j<=i;j++){
           printf("%d ",k++);
       }
       
       printf("\n");
       
   }
}
