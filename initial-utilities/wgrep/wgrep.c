#include <stdlib.h>
#include <stdio.h>

//git add .

//argv[1] = the search term
//argv[2] = the file

//if argc = 2, they only entered either the file or the search term
//try to  open it, if it opens correctly it is the file
//if it cant open it is the search term

//if argc = 1, they entered no arguments

//NONE OF THIS CODE IS CORRECT YET

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
		//check to see if it opens
		FILE *fp = fopen(argv[1], "r");
                if (fp == NULL)//if it cant open, then they entered a search term
                {
                        //wgrep should read from standard input
			//I DONT KNOW WHAT THIS MEANS
			//COME BACK TO
                }

		//else they entered only a file
		//DOES THIS MEAN THE SEARCH TERM IS THE EMPTY STRING?
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

		char *buffer;
		size_t bufferSize =0;
		int lineNum = 0;
		size_t lineSize =0;


		lineSize = getline(&buffer, &bufferSize, fp);//get first line

		//loop through all the lines
		while(lineSize >=0)
		{

			lineNum++;//increment line num

			//LOOK FOR THE SEARCH TERM

			//for now print out the line to make sure it is working right
			printf("line: %s", buffer);
		}//end while looping htorugh lines of the file

                fclose(fp);
        }//end for each file
        exit(0);

}//end main function


