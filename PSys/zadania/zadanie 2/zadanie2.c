#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <string.h>

#define Buffer 3

int file_version(int argc,char *argv[]);
int stdi_version();
 
int main(int argc,char *argv[])
{
	//argc=2;
	if(argc ==2)
	{
		return file_version(argc,argv);
	}
	else
	{
		return	stdi_version();
	}
}

int file_version(int argc,char *argv[])
{
	int input,output;
	ssize_t input_size, output_size;
	
	input = open(argv[1], O_RDONLY); 
	if(input==-1)
	{
		perror("read");
		return 2;
	}
	
	strcat(argv[1], ".red");
	output = open(argv[1], O_CREAT | O_WRONLY | O_TRUNC, 0644);
	if(output==-1)
	{
		perror("write");
		return 3;
	}
	
	char buffer[Buffer],letter;
	
	while((input_size =  read (input, &buffer, Buffer)) != 0)
	{
		
		if(input_size ==3){
			printf("%c",buffer[2]);
			letter = buffer[2];
			output_size = write(output, &letter, 1);
		}

	}
	close(input);
	close(output);
	return 0;
}

int stdi_version()
{
	printf("You did't specify source file, end your text with #\n");
	
	int output;
	ssize_t  output_size;
	
	output = open("result.txt", O_CREAT | O_WRONLY | O_TRUNC, 0644);
	if(output==-1)
	{
		perror("write");
		return 3;
	}
	
	int letter , i=0;
   	while ((letter = getchar())!=35)
   	{

    	if(i==2)
		{
			output_size = write(output, &letter, 1);
			i=0;
		}
		else
		{
			i++;
				
		}
    	
   	}
   	printf("\nShortened text is saved in result.txt\n");
   	close(output);
   	return 0;
}

