#include <stdio.h>


struct emp{
    char empid[10];
    char empname[30];
};
int main()
{
  struct emp emp1;
      strcpy(emp1.empid,"1234");
      strcpy(emp1.empname,"muskaan");
      printf("%s\n",emp1.empid);
      printf("%s\n",emp1.empname);
      
      
      struct emp emp2;
      strcpy(emp2.empid,"4567");
      strcpy(emp2.empname,"sanober");
      printf("%s\n",emp2.empid);
      printf("%s",emp2.empname);
   

    return 0;
}
