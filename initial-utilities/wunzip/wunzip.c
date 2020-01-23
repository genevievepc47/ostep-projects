#include <stdlib.h>
#include <stdio.h>

//git add .
//git commit -m "commit message"
//pit push


int main(int argc, char *argv[])
{



//argv[1] is the file that needs to be decompressed

        //printf("%d", argc);

        //check if they entered enough arguments
        if(argc < 2)//if they did not enter enough arguments
        {
                printf("wunzip: file1 [file2 ...]\n");
                exit(1);
        }

        //make a loop that goes through all files that need to be decompressed
        int i;

        for(i =1; i< argc; i++)//loop through each file sent in
        {
                FILE *fp = fopen(argv[i], "r");
                if (fp == NULL)
                {
                        printf("wcat: cannot open file\n");
                        exit(1);
                }


			int count;
			size_t bytesRead;

			while((bytesRead = fread(&count, sizeof(int), 1, fp)) >0)
			{
        			char c = fgetc(fp);
        			printf("%d\n", count);
				printf("%c\n", c);

				//c = fgetc()
			}

	//if its binary, size of int, 1, fp
		//printf("%lu\n",sizeof(fp));


                fclose(fp);
                //printf("i got here");
        }//end for each file
        exit(0);

}//end main

