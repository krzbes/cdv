#include<stdio.h>
#include <string.h>
#include <errno.h>

#define MAX 41

int main(int argc,char argv[])
{
	FILE *wp;
	char word[MAX];
	
	wp = fopen("text.txt", "a+");
	if(wp == NULL)
	{
		perror("fopen");
		return 1;
	}
	
	fputs("Provide words to add them to a file ", stdout);
	fputs("To end enter: #\n", stdout);
	
	while((fscanf(stdin, "%40s", word )==1) && (word[0] != '#'))
	{
		fprintf(wp, "%s",word);
		fprintf(wp,"%s","");
	}
	puts("Done!");
	
	rewind(wp);
	
	puts("Content of file:");
	while(fscanf(wp,"%s", word)==1)
	{
		printf("%s\n",word);
	}
	fclose(wp);
	
	return 0;
}
