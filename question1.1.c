//program 1
//Write a program (using fork() and/or exec() commands) where parent and child execute:
//(c)before terminating parent waits for child to finish its task.
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
    else if(pid>0){
        printf("\n Hi this is parent process");
        printf("\n My actual pid is %d \n",getpid());
        wait(NULL);
        exit(1);
    }
}