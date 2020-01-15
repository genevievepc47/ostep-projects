#include <stdio.h>

//git add .
//git commit -m "commit message"
//pit push
int main(int argc, char *argv[])
{

//if argc is 1, they didnt enter a file same
//argv[1]


	//check if they entered a file
	if(argc == 1)//if they did not enter any files
	{
		printf("No files entered");
		exit(0);
	}

	int i;
	for(i =2; i<= argc; i++)//loop through each file sent in
	{
		FILE *fp = fopen(argv[i]", "r");
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
	}//end for each file
	exit(0);

}//end main function
