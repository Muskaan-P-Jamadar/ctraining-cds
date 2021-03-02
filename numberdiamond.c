#include<stdio.h>
int main()
{
    int num=0;
    printf("ENTER THE NUMBER\n");
    scanf("%d",&num);
    for(int i=1;i<=num;i++){
        for(int j=num;j>=i;j--){
            printf(" ");
        }
        for(int k=1;k<=i;k++){
            printf("%d ",i);
        }
        printf("\n");
    }
    
    for(int i=num;i>=0;i--){
        for(int j=num;j>=i;j--){
            printf(" ");
        }
        for(int k=1;k<=i;k++){
            printf("%d ",i);
        }
        printf("\n");
    }
}