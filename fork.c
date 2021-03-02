#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>
int main() {
	int pid=0;
   pid=fork();
   if(pid==0){
	   
   printf("child\n");
   }
   else
	   printf("parent");
   return 0;
}
https://github.com/Muskaan-P-Jamadar/linux.git