#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>

int main()
{
  pid_t pidFork = fork();

  if (pidFork < 0)
    fprintf(stderr, "Error in fork()\n");
  else if (pidFork > 0)
    execlp("/bin/ls", "ls", NULL);
  else
    execlp("/usr/bin/cal", "cal", NULL);

  return 0;
}