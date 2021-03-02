#include<stdio.h>

int main()
{
int row,clmn;
int arr[100][100];
printf("enter the rows for array\n");
scanf("%d",&row);

printf("entetr the columns\n");
scanf("%d",&clmn);

 arr[row][clmn];
printf("enter the data\n");
for(int i=0;i<row;i++){
    for(int j=0;j<clmn;j++){
        scanf("%d",&arr[i][j]);
        
    }
}
    
    for(int i=0;i<row;i++){
    for(int j=0;j<clmn;j++){
        printf("%d ",arr[i][j]);
        
    }
    printf("\n");
}
return 0;
}