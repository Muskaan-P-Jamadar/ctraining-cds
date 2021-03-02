#include<stdio.h>
struct student{
    char name[20];
    char id[20];
    char place[30];
};

int main(){
    struct student st1[100];
    printf("Enter 3 student details");
    
    for(int i=1;i<=3;i++){
        scanf("%s\t",st1[i].name);
        scanf("%s\t",st1[i].id);
        scanf("%s\n",st1[i].place);
        
    }
    
    for(int i=1;i<=3;i++){
        printf("%s\t",st1[i].name);
        printf("%s\t",st1[i].id);
        printf("%s\n",st1[i].place);
        
    }
    return 0;
    
}