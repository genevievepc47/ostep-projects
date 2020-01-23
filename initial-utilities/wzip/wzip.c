#include <stdlib.h>
#include <stdio.h>

//git add .
//git commit -m "commit message"
//pit push

//fiorejp@gmail.com
int main(int argc, char *argv[])
{
//int count;
//size_t bytesRead;

//while(bytesRead = fread(&count, sizeof(int), 1, stin)) >0)
//{
//	char c = fread(&c...)//OR
//	c = fgetc()
//}


//argv[1] is the file that needs to be compressed
//argv[util u hit greater than sign] all these needs to be compressed
//argv[argc-1] is the output file

	//printf("%d", argc);

        //check if they entered enough arguments
        if(argc < 2)//if they did not enter enough arguments
        {
                printf("wzip: file1[file2 ...]\n");
                exit(1);
        }

	//make a loop that goes through all files that need to be compressed
	int i;
        for(i =1; i< argc; i++)//loop through each file sent in
        {
                FILE *fp = fopen(argv[i], "r");
                if (fp == NULL)
                {
                        printf("wcat: cannot open file\n");
                        exit(1);
                }

                char buffer[1000];
                while(fgets(buffer, sizeof buffer, fp) != NULL)//read the file $
                {

			//WHERE WE NEED TO COMPRESS IT
			//get first letter of buffer
			//loop through buffer until you hit a new letter
			//the number of repeats of the letter  is the integer
			//the letter is the single char in ascii
			//write it to the file(without a new line)


			int j =0;//for looping thorugh the whole word
			//char firstLetter = buffer[j];

			//int counter =0;

			while(buffer[j]!= '\n')
			{
				char firstLetter = buffer[j];
				int counter =0;



				while(buffer[j] == firstLetter)
				{
					counter +=1;
					j+=1;

				}


				//add it to the file



				//printf("%d", counter);
				fwrite(&counter, sizeof(counter), 1, stdout);
				printf("%c",firstLetter);

				 //fclose(fp1);



                         }//end while not at end of string
                }//end reading through a file


                fclose(fp);
		//fclose(fp1);
		//printf("i got here");
        }//end for each file
	exit(0);

}//end main
