/*
 * Simple Fork Example
 *
 * Note: if needed, run from shell
 */

// This is a new commment in the code

#include <stdio.h>
#include <unistd.h>

void forkexample()
{
    int PID;
    // child process because return value zero
    PID = fork();
    if (PID == 0)
        printf("Hello from Child!\n");
  
    // parent process because return value non-zero.
    else
        printf("Hello from Parent!\n");
        printf("Child PID: %d\n",PID);
}
int main()
{
    forkexample();
    return 0;
}
