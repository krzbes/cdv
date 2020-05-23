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
        FILE *output;
        output = fopen("result.txt","w");
        if(!output)
        {
            perror("write");
            return 1;
        }

        int i =9;
        for(;i<100;i+=3)
        {
            fprintf(output, "%i\n",i);
        }
        fclose(output);
        return 0;
    }
    if(pid > 0)//parent
    {
        ch_pid = wait(&status);
        printf("child status %i\n",status);
    }
    return 0;
}
