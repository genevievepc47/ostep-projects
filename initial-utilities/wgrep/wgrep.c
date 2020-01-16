#include <stdlib.h>
#include <stdio.h>

//git add .

//argv[1] = the search term
//argv[2] = the file

//if argc = 2, THEY ONLY ENTER ONE THING IT IS THE SEARCH TERM! USE STANDARD INPUT!!
//if argc = 1, they entered no arguments



int main(int argc, char *argv[])
{

//if argc is 1, they didnt enter a file same
//argv[1]


        //check if they entered anything
        if(argc == 1)//if they did not enter anything
        {
                printf("wgrep: searchterm [file...]\n");
                exit(0);
        }

	//check if they only entered one argument
	if(argc == 2)
	{

		size_t size =10;
		char *string;
		int _read;

		printf("Enter the text you want to search for the term in");
		string = (char *) malloc(size);
		_read = getline(&string, &size, stdin);
		puts("you entered the following string:");
		puts(string);

		if(_read ==-1)
		{
			puts("error!");
		}

	}

        int i;
        for(i =2; i< argc; i++)//loop through each file sent in
        {
                FILE *fp = fopen(argv[i], "r");
                if (fp == NULL)
                {
                        printf("wgrep: cannot open file\n");
                        exit(1);
                }

		char *buffer = NULL;
		size_t bufferSize =0;
		int lineNum = 0;
		//size_t lineSize =0;


		//loop through all the lines
		while(getline(&buffer, &bufferSize, fp) != -1)
		{

			lineNum++;//increment line num

			//LOOK FOR THE SEARCH TERM

			//for now print out the line to make sure it is working right
			printf("line: %s", buffer);
		}//end while looping htorugh lines of the file

		free(buffer);
		buffer = NULL;

                fclose(fp);
		printf("dome with this file");
        }//end for each file
        exit(0);

}//end main function


