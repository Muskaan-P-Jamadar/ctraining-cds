/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int n=0;
   printf("enter the rows\n");
   scanf("%d",&n);
   func(n);
    return 0;
}
func(int x){
    for(int i=1;i<=x;i++){
        for(int j=5;j>=i;j--){
            printf(" ");
        }
        for(int k=1;k<=i;k++){
            printf("* ");
        }
        printf("\n");
    }
}
    


    
    
