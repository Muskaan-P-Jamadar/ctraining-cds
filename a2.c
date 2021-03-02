#include<stdio.h>
int b=20;//global variable
int main()
{
    {
    int a=10;
    printf("%d\n",a);
    printf("%d\n",b);
    }
    //printf("%d\n",a);//error as it is local variable 
    printf("%d\n",b);
    return 0;
}