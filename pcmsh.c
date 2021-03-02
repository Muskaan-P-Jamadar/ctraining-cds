#include<stdio.h>
#include<unistd.h>
# define msgsize 50;

char *msg = "hello world";
char *cmsg = "hello parent";
 int main()
 {
 
 char buf[msgsize];
 char buf1[msgsize];
 int p1[2],pid1,m2;
 int p[2],pid,m1;
 
 if(pipe(p) < 0){ exit(1)};
	 if(pipe(p)<0)
  exit(1);
  //parent
  if((pid = fork())>0){
  write(p[1],msg,msgsize);//parents msg
  sleep(5);
  }
  else
  {
	  
   while((m1=read(p[0],buf,msgsize))>0)
   printf("%s\n",buf);
   
   if(m1!=0){
   exit(2);
   printf("Finished reading\n");
   }
  
   if(pipe(p1)<0)
   exit(1);

   if((pid1 =fork())==0){
	   sleep(5);
	   write(p1[1],cmsg,msgsize);
   }
   else{
	   close(p1[1]);
	   while((m2=read(p1[0],buf1,msgsize))>0)
		   printf("%s\n",buf1);
	   
	   if(m2!=0)
	   {
		   exit(2);
		   printf("finished reading 2\n");
		   
	   }
   return 0;
   }
 }
 