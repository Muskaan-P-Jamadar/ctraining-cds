#include<stdio.h>
void main(){
int rev=0,num=0,n=0,digit=0;
printf("enter the number\n");
scanf("%d",&num);
n= num;
 
while(n!=0){
digit = n%10;
rev = rev*10+digit;
n= n/10;
}
 
if(rev == num){
printf("number is palindrome\n");
}
else{
printf("number is not palindrome\n");
}
}