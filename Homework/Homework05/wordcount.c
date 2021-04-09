/////////////////////////////////
// Below is for question no. 5 //
/////////////////////////////////

#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE * file;
    char path[100];

    char ch;
    int wordCount;


    //Prompt user to input file name search for
    printf("Enter a file to count the number of characters in a file: ");
    scanf("%s", path);

    // "r" to read character by character
    file = fopen(path, "r");


    // File validation - whether the
    if (file == NULL)
    {
        printf("\nUnable to open file.\n");
        printf("Please check if file exists.\n");

        exit(EXIT_FAILURE);
    }

    // to count no. of characters
    wordCount = 1;
    while ((ch = fgetc(file)) != EOF)
    {
        if (ch == ' ' || ch == '\n')
        {
//            words++;
            wordCount++;
        }
    }

    //Result of counting
    printf("\n");
//    printf("Total number of words = %d\n", words);
    printf("Total number of words = %d\n", wordCount);

    //Closes file
    fclose(file);

    return 0;
}
