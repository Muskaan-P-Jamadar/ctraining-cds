#include<stdio.h>
int main(){
int i,n;
int a[100];
printf("enter the size of array\n");
scanf("%d",&n);
for(i=0;i<=n-1;i++){
printf("enter the elements of array\n");
scanf("%d",&a[i]);
}
for(i=0;i<=n-1;i++){
printf("%d",a[i]);
}
printf("\n");
int b[100];
for(i=0;i<=n-1;i++){
b[i]=a[i];
}
for(i=0;i<=n-1;i++){
printf(" %d",b[i]);
}
printf("\n");
}
