#include <stdio.h>
#include <stdlib.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <string.h>
#include <dirent.h>
#include <unistd.h>

int main(int argc,char *argv[])
{
	//create directory results
	DIR *result;
	result = opendir("result");
	if(result==NULL)
	{
		int directory = mkdir("result",( S_IFDIR | S_IRWXU | S_IRWXG | S_IRWXO ));
		if(directory ==-1)
		{
			perror("Issue with directory \"result\"\n");
			exit(2);
		}
	}
	closedir(result);

	DIR *d;
	struct dirent *dent;
	d = opendir("/etc");
	if(d!=NULL)
    {

		FILE *output; //open and create etc_dir.out file
		output = fopen("result/etc_dir.out", "w");
		if(!output)
		{
			perror("write etc_dir");
			exit(3);
		}
        while((dent=readdir(d))!=NULL)//etc directory reading
		{
			if(dent->d_type == DT_DIR)//if this file is a directory 
			{
				fputs(dent->d_name,output);
				fputs("\n",output);
            }
        }
        closedir(d);
		fclose(output);
    }

	DIR *d2;
	struct dirent *dent2;
	d2 = opendir("/etc/sysconfig");
	if(d2!=NULL)
    {

		FILE *output2;
		output2 = fopen("result/sysconfig.out", "w");//open and create sysconfig.out file
		if(!output2)
		{
			perror("write sysconfig.out");
			exit(3);
		}

		struct stat *buf = malloc(sizeof(struct stat));

        while((dent2=readdir(d2))!=NULL)//etc/sysconfig directory reading
		{
			char path[300] = "/etc/sysconfig/";
			strcat(path,dent2->d_name);
			stat(path,buf);
			if(!(S_IRWXO & buf->st_mode))//test if file have any permissions for others
			{
				printf("%s\n",dent2->d_name);
				fputs(dent2->d_name,output2);
				fputs("\n",output2);
			}
        }
        closedir(d2);
		fclose(output2);
		free(buf);
    }
	return 0;
}
