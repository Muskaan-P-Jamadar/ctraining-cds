#include<stdio.h>

struct employee {
    char id[20];
    char name[100];
    char company[300];
};
typedef struct employee emp;
emp e1[3];

int main(){

printf("enter 3 employee details\n ");
for(int i=0;i<3;i++)
{
    scanf("%s %s %s",&e1[i].id,&e1[i].name,e1[i].company);
}
display();

update();

display();

delete();

display();

search();

display();
return 0;
}
void display(){
    for(int i=0;i<3;i++){
        printf("%s\t",e1[i].id);
        printf("%s\t",e1[i].name);
        printf("%s\n",e1[i].company);
    }
}

void update()
{
    int index,flag=0;
    char sid[10];
    printf("entert the id to update\n ");
    scanf("%s",&sid);
    for(int i=0;i<3;i++){
        if(strcmp(sid,e1[i].id)==0){
           index=i;
           flag=1;
        
        strcpy(e1[index].id,"11");
        strcpy(e1[index].name,"muskaan");
        strcpy(e1[index].company,"cds");
        
        break;
    }
    }
    if(flag==1){
        printf("details updated\n");
    }
    else{
        printf("employee not found\n");
    }
    return 0;
}
void delete(){
    char did[10];
    int flag=0,idx;
    printf("enter the id to delete\n");
    scanf("%s",&did);
    for(int i=0;i<3;i++){
        if(strcmp(did,e1[i].id)==0){
            flag=1;
            idx=i;
            
            strcpy(e1[idx].id,"\0");
            strcpy(e1[idx].name,"\0");
            strcpy(e1[idx].company,"\0");
            break;
        }
    }
    if(flag==1){
        printf("deleted\n");
    }
    else
    {
        printf("id not found\n");
    }
    return 0;
}
void search()
{
    char ids[10];int idx=0,flag=0;
    printf("enter id to search\n ");
    scanf("%s",&ids);
    
    for(int i=0;i<3;i++){
        if(strcmp(ids,e1[i].id)==0){
            flag=1;
            idx=i;
            break;
        }
    }
    if(flag==1){
        printf("id found %s %s %s\n",e1[idx].id,e1[idx].name,e1[idx].company);
    }
    else
    {
        printf("id not found\n");
    }
}

