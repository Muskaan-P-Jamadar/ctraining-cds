#include<stdio.h>
int main(){
int a=0,flag=0;
printf("enter a number\n");
scanf("%d" ,&a);
for(int i=2;i<=a;i++){
if(a%i==0){
printf("Number is not prime\n");
flag=1;
break;
 
}
 
else{
flag=0;
printf("Number is prime\n");
return 0;
}
}
}