
#include<stdio.h>
#include<string.h>
struct emp{
   char name[100];
   char id[100];
    
};
int n=4;
int main(){
struct emp emp1[100];

printf("enter the name and id of employee\n");
for(int i=0;i<n;i++){
    scanf("%s",emp1[i].name);
    scanf("%s",emp1[i].id);
    
}


for(int i=0;i<n;i++){
    printf("%s\t",emp1[i].name);
    printf("%s\n",emp1[i].id);
}
int flag=0,idx=0;
char sid[10];
printf("enter the id to search\n");
scanf("%s",sid);

for(int i=0;i<n;i++){
    if(strcmp(sid,emp1[i].id)==0){
        flag=1;
        idx=i;
        break;
    }
}
if(flag==1){
    printf("employee id found\n");
    printf("employee name %s and id is %s\n",emp1[idx].name,emp1[idx].id);
    
}
else{
    printf("employee not found");
}//delete
char delid[10];
int indx=n;//ss
printf("Enter the id to delete\n");
scanf("%s",delid);
for(int i=0;i<n;i++){
    if(strcmp(delid,emp1[i].id)==0){
        
        strcpy(emp1[i].id,emp1[i+1].id);
        strcpy(emp1[i].name, emp1[i+1].name);
        indx=i;
      //  break;
        
    }
}

for(int i=indx+1; i<n;i++)
{
    //strcpy(emp1[i].id,emp1[i+1].id);
     strcpy(emp1[i].id,emp1[i+1].id);
   
    strcpy(emp1[i].name, emp1[i+1].name);
}
--n;

    
    
for(int i=0;i<n;i++){
    printf("%s\t",emp1[i].name);
    printf("%s\n",emp1[i].id);
}
char nid[100];
char nname[100];
printf("enter the new details(name)\n");
scanf("%s",nname);
printf("enter the new details(id)\n");
scanf("%s",nid);


strcpy(emp1[n].id,nid);
strcpy(emp1[n].name,nname);

for(int i=0;i<n+1;i++){
    printf("%s\t",emp1[i].name);
    printf("%s\n",emp1[i].id);
}


return 0;
}
