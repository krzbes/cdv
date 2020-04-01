#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include<sys/types.h>
#include<sys/stat.h>
#include<fcntl.h>
#include<unistd.h>
#include<string.h>


int randomRange(int,int);

int main(int argc,char *argv[])
{
	// variables 
	const int low =10;
	const int up = 99;
	
	char buffer[3];
	short r_num;
	int fd;
	
	
	srand(time(0));
	
	// open file for writing 
	fd = open("test.txt", O_CREAT | O_WRONLY | O_TRUNC, 0644);//replace with argv[1] on mars
	if(fd==-1)
	{
		return 2;
	}
	
	int i;
	for(i=0;i<10;i++)
	{
		
		r_num = randomRange(low,up);
		snprintf(buffer,3, "%d", r_num); 
		printf("%s\n",buffer);
		if(write(fd,&buffer,2)!=2)
		{
			return 3;
		}	
		
	}
	close(fd);
	return 0;
}
int  randomRange(int lower,int upper)
{
	int num;
	num=(rand()%(upper - lower+1)+lower);
	return num;
}
