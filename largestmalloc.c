#include<stdio.h>
#include<stdlib.h>
int main()
{
    
    int n=1000;
    int *p;

    p= (int *)malloc(sizeof(int)*5);
    
    for(int i=0;i<5;i++){
        *(p+i)=n++;
    }
    for(int i=0;i<5;i++){
        printf("%d ",*(p+i));
    }
    printf("\n");
    for(int i=0;i<5;i++){
        if(*(p)<*(p+i)){
            *(p)=*(p+i);
        }
    }
    printf("%d\n",*(p));
    
    
}