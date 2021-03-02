#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct employee
{
    char empid[10];
    char empname[100];
    char company[50];
};
int main()
{
    FILE *fp;
    fp=fopen("employeedb.bin","wb");
    if(fp==NULL){
        fprintf(stderr,"error printing\n");
        exit(0);
    }
    
    struct employee e1[100];
    printf("enter data\n");
    for(int i=0;i<10;i++){
        scanf("%s %s %s",&e1[i].empid,&e1[i].empname,&e1[i].company);
    }
    fwrite(&e1,sizeof(struct employee),1,fp);
    if(fwrite!=0){
        printf("contenets written to file\n");
        
    }
    else
    {
        printf("some error occured--\n");
    }
    fclose(fp);
    return 0;
}