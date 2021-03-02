#include<stdio.h>
int main(){
    int ar[2][3];//static memory alloction
    int **p;
    p = &a;
    
    p=(int *)malloc(sizeof(int)*2);//dynamic memeory allocation
    
    *(p+0)=(int *)malloc(sizeof(int)*3);
    *(p+1)=(int *)malloc (sizeof(int)*3);
    
    *(*(p+0)+0)=100;
    *(*(p+0)+1)=200;
    *(*(p+0)+2)=300;
    
    *(*(p+1)+0)=100;
    *(*(p+1)+1)=200;
    *(*(p+1)+2)=300;
    
    printf("%d ",p[0][0]);
    printf("%d ",p[0][1]);
    printf("%d\n",p[0][2]);
    
    
        printf("%d ",p[1][0]);
        printf("%d ",p[1][1]);
        printf("%d ",p[1][2]);
    
}