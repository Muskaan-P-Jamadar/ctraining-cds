#include<stdio.h>
#include<stdlib.h>
#include<string.h>
 
struct student{
 int age,marks,roll;
 char name[30];
 char school[40];
}s1;
 
int main()
{
 FILE *fp;
 fp= fopen("stu.txt","r");
 if(fp==NULL)
{
 fprintf(stderr,"error\n");
exit(1);
}
 
while(fread(&s1,sizeof(struct student),1,fp)==1)
{
 printf("age of student is %d\n",s1.age);
 printf("marks of student is %d\n",s1.marks);
printf("roll no of student is %d\n",s1.roll);
printf("name of student is %s\n",s1.name);
printf("school of student is %s\n",s1.school);
printf("######################################");
}
fclose(fp);
}