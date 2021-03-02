#include<stdio.h>
int main(){
int i,n,help,j;
int a[100];
printf("enter the size of array\n");
scanf("%d",&n);
for(i=0;i<=n-1;i++){
printf("enter the elements of array\n");
scanf("%d",&a[i]);
}
for(i=0;i<=n-1;i++){
    if(a[0]<a[i]){
        a[0]=a[i];
    }
}
    printf("%d",a[0]);
}