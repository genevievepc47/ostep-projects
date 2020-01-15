#include <stdio.h>

int main(int argc, char *argv[])
{

//if argc is 1, they didnt enter a file same
//argv[1]
	FILE *fp = fopen("main.c", "r");
	if (fp == NULL)
	{
		printf("wcat:cannot open file\n");
		exit(1);
	}

	char buffer[1000];
	while(fgets(buffer, sizeof buffer, fp) != NULL)//read the file one line at a time
	{
		printf("%s", buffer);
	}

	fclose(fp);
	exit(0);

}//end main function
