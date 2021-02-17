#include<stdio.h>
int main()
{    //usinf for loop
printf("using for loop\n");
    for(int i=0;i<4;i++){
    staticdemo();
    }
    
    printf("\n");
    printf("using while loop\n");
    //using while loop
    int i=0;
    while(i<4){
        staticdemo();
        i++;
    }

    
    return 0;
}
void staticdemo(){
    static int a=4;
       a=a+4;
    printf("%d ",a);
    
}