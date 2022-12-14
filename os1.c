 #include<stdio.h> 
#include<stdlib.h> 
#include<unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
 
void main(int argc,char *arg[]) 
{ 
int pid; 
pid=fork(); 
if(pid<0) 
{ 
printf("fork failed"); 
exit(1); 
} 
else if(pid==0) 
{ 
printf("\nNow in Child Process and it's o/p is \n"); 
execlp("ls","ls",NULL); 
exit(0); 
} 
else 
{ 
printf("\nChild Process created successfully\n"); 
printf("\nIt's Process id is %d\n",getpid()); 
wait(NULL); 
printf("\nReturn back to Parent process, now ready to exit\n"); 
exit(0); 
} 
}

