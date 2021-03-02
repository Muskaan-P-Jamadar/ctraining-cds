#include<stdio.h>
#include<stdlib.h>
#include<string.h>
 
struct student{
 
           int age,marks,roll;
          char name[30];
         char school[40];
};
int main()
{
 FILE *fp;
 fp=fopen("stu.txt","w");
 if(fp==NULL)
{
 fprintf(stderr,"cant open file\n");
 exit(0);
}
 struct student s1[3];
 printf("enter age,marks,roll,name,school data\n");
for(int i=0;i<3;i++){
scanf("%d %d %d %s %s",&s1[i].age,&s1[i].marks,&s1[i].roll,&s1[i].name,&s1[i].school);

fwrite(&s1,sizeof(struct student),1,fp);
}
if(fwrite!=0)
{
 printf("contents are written to the file\n");
}
fclose(fp);
}