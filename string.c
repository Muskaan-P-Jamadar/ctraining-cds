#include<stdio.h>
#include<string.h>
int main()
{
    char name[30]="muskaan";
    char name1[10]="jamadar";
   char name3[50];
    
    
    /*strcat(name," ");
    strcat(name,name1);
    printf("%s\n",name);
    */
    
    strcat(name3,name);
    strcat(name3,name1);
    printf("%s\n",name3);
    return 0;
}