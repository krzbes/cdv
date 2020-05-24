#include <stdlib.h>
#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>
#include <signal.h>

void sig_usr(int signo) {
    if(signo == SIGUSR1)
    {
        pid_t ppid = getppid();
        FILE *output;
        output = fopen("zadanie7.txt","a");
        if(!output)
        {
            perror("write");
            exit(3);
        }
        fprintf(output,"%i\n",ppid);
        fclose(output);
    }
    else if(signo == SIGUSR2)
    {
        FILE *output;
        output = fopen("zadanie7.txt","w");
        if(!output)
        {
            perror("write");
            exit(3);
        }
        fprintf(output,"\n");
        fclose(output);
    }
    
    exit(0);
}

int main(int argc,char *argv[])
{
    FILE *output;
    output = fopen("zadanie7.txt","w");
    if(!output)
    {
        perror("write");
        exit(3);
    }
    pid_t pid = getpid(); 
    fprintf(output,"%i\n",pid);
    fclose(output);

    signal(SIGUSR1, sig_usr);
    signal(SIGUSR2, sig_usr);

    for(;;)
        pause();

    return 0;
}
