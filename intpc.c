#include<stdio.h>
#include<unistd.h>
#define len 100

int *d1= 10;
int *d2=20;

int main(){
    
    int b1[len];
    int b2[len];
    
    int p1[2],m,pid;
    
    if(pipe(p1)<0)
    {
        exit(1);
    }
    
    if((pid = fork())>0)
    {
        write(p1[1],d1,len);
        write(p1[1],d2,len);
        sleep(5);
    }
    else
    {
        while((m=read(p1[0],b1,len))>0)
        printf("%d\n",b1);
    }
    if(m!=0){
        exit(1);
        printf("finished\n");
    }
    return 0;
}
