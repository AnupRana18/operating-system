// program 5
// Write a program to copy files using system calls.
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
void main()
{
    char buf;
    int fd_one, fd_two;
    fd_one = open("firstfile.txt", O_RDONLY);
    if (fd_one == -1)
    {

        printf("error!!!");
        close(fd_one);
        return;
    }
    fd_two = open("s2.txt", O_CREAT | O_WRONLY, S_IRUSR | S_IWUSR | S_IRGRP | S_IROTH);
    while (read(fd_one, &buf, 1))
    {
        write(fd_two, &buf, 1);
    }
    printf("successful copy.");
    close(fd_one);
    close(fd_two);
}