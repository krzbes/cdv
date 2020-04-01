#include <stdio.h>
#include<sys/types.h>
#include<sys/stat.h>
#include<fcntl.h>
#include<unistd.h>

int main(int argc,char *argv[])
{
 
	// variables 
	char buffer[2];
	ssize_t ret_in;
	int fd;

	// open file for reading
	fd = open("test.txt",  O_RDONLY ); //replace with argv[1] on mars
	if(fd==-1)
	{
		return 2;
	}
	
	//read each number and show the result
	while((ret_in=read(fd, &buffer, 2)) > 0)
	{
		int number = (((int)buffer[0] -48)*10 + (int)buffer[1] -48);
		int result = number*3 ;
		printf("Liczba: %d *3 = %d\n",number,result);	
			
	}
	
	close(fd);
	return 0;
	

}

