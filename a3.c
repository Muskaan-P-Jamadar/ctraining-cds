#include<stdio.h>
#include<string.h>
  struct emp
{
  
char name[100];
   
char id[100];
 

};

int n = 4;

int
main ()
{
  
struct emp emp1[100];
  
 
printf ("enter the name and id of employee\n");
  
for (int i = 0; i < n; i++)
    {
      
scanf ("%s", emp1[i].name);
      
scanf ("%s", emp1[i].id);
  
 
} 
 
 
for (int i = 0; i < n; i++)
    {
      
printf ("%s\t", emp1[i].name);
      
printf ("%s\n", emp1[i].id);
    
} 
return 0;
}