#include<stdio.h>
int main(){
int i=0,num=0,sum=0;
printf("enter the count needed\n");
scanf("%d", &num);
for(i=0;i<=num;i++){
sum = sum+i;
}
printf("sum : %d\n",sum);
}