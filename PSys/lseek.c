#include<stdio.h>
#include<stdlib.h>
#include<sys/types.h>
#include<sys/stat.h>
#include<fcntl.h>
#include<unistd.h>
#include<string.h>

#define BUF_SIZE 1024

int main(int argc,char *argv[]){
	char buf1[]="abcdefhhij";
	char buf2[]="ABCDEFGHIJ";
	
	int fd;
	
	fd = open("file.nohole", O_CREAT | O_WRONLY | O_TRUNC, 0644);
	if(fd==-1)
	{
		return 2;
	}
	if(write(fd,buf1,10)!=10)
	{
		return 10;
	}
	//lseek(fs,0,SEEK_SET); nadpisze abcdefhhij, ABCDEFGHIJ
	//lseek(fs,100,SEEK_END); Stworzy przerwe pomiêdzy abcdefhhij  ABCDEFGHIJ wieloœci 100 bajtów
	if(write(fd,buf2,10)!=10)
	{
		return 11;
	}
	
	return 0;
}
