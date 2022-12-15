//program 1
//Write a program (using fork() and/or exec() commands) where parent and child execute:
//(b)same program different code
#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
int main(){
    int pid;
    pid=fork();
    if(pid<0){
        printf("!!ERROR!!");
        exit(1);
    }
    else if(pid==0)
    {
        printf("\n Hi this is child process");
        printf("\n  pid is %d",getpid());
        exit(0);
    }
    else{
        printf("\n Hi this is parent process");
        printf("\n my actual pid is: %d \n",grtpid());
        exit(1);
    }
}