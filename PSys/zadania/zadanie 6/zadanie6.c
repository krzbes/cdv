#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>

int main(int argc,char *argv[])
{
    pid_t pid,ch_pid;
    int status;
    pid = fork();
    
    if(pid == -1)
    {
        fprintf(stderr, "Fork failed\n");
        exit(1);
    }
    if(pid == 0)//child
    {
        int ret;
        ret = execl("/bin/ls"," ","-a",NULL);
        if(ret == -1)
        {
            fprintf(stderr, "error\n");
            return 1;
        }
        return 0;
    }
    if(pid > 0)//parent
    {
        ch_pid = wait(&status);
        printf("child status %i\n",status);
    }
    return 0;
}
