#include<stdio.h>
#include<stdlib.h>

struct employee{
	char empid[10];
    char empname[100];
     char company[50];
}e1;
 
int main()
{
    
 FILE *fp,*fp1; 
 char id[10];
 struct employee e2;
 fp = fopen("employeedb.bin","rb+");
 fp1 = fopen("copy.bin","ab+");
 printf("enter the id to update\n");
 scanf("%s",&e2.empid);
 
 if(fp==NULL)
 {
	 printf("error printing\n");
	 exit(1);
 }
 
 while(fread(&e1,sizeof(struct employee),1,fp)){
     if(e1.empid!=e2.empid){
         fwrite(&e1,sizeof(e1),1,fp1);
	 }
 }
	printf("enter the id,name and company of employee\n");
	scanf("%s",&e2.empid);
	scanf("%s",&e2.empname);
	scanf("%s",&e2.company);
	 fwrite(&e2,sizeof(struct employee),1,fp1);
	 fclose(fp);
     fclose(fp1);
 
 remove("employeedb.bin");
 rename("copy.bin","employee.bin");
 printf("data updated sucessfully\n");
 return 0;
}
 