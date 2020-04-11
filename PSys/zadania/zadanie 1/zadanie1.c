#include <stdio.h>
#include <string.h>

int file_version(int argc,char *argv[]);
int stdi_version();
 
int main(int argc,char *argv[])
{
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
	FILE *input,*output;
	
	input = fopen("source.txt", "r"); 
	if(!input)
	{
		perror("read");
		return 2;
	}
	
	output = fopen("result.txt","w");
	if(!output)
	{
		perror("write");
		return 3;
	}
	int letter , i=0;
	while(feof(input) == 0)
	{
		letter = fgetc(input);
		if(i==0)
		{
			fputc (letter, output);
			i++;
		}
		else
		{
			i++;
			if(i==3) i=0;	
		}
		
	}
	return 0;
}

int stdi_version()
{
	printf("You did't specify source file, end your text with #\n");
	
	FILE *output;
	
	output = fopen("result.txt","w");
	if(!output)
	{
		perror("write");
		return 3;
	}
	
	int letter , i=0;
   	while ((letter = getchar())!=35)
   	{

    	if(i==0)
		{
			fputc (letter, output);
			i++;
		}
		else
		{
			i++;
			if(i==3) i=0;	
		}
    	
   	}
   	printf("\nShortened text is saved in result.txt\n");
   	return 0;

}

