#include<stdio.h>
int main()
{
int key=0,n;
int a[100];
printf("enter the size of an array\n");
scanf("%d",&n);
printf("enter the elements of an array\n");
for(int i=0;i<n;i++){
scanf("%d",&a[i]);
}
printf("Enter the key element to find\n");
scanf("%d",&key);
for(int i=0;i<n;i++){
if(a[i]==key)
{
printf("Key found that is: %d\n",key);
return 0;
}

}

printf("key not found\n");
}