////////////////////////////////
// Below is for question no. 4//
////////////////////////////////

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    char enter1, enter2;
    time_t start, end;

    printf("Press enter when you're ready to hold your breath");
    enter1 = getchar();
    if (enter1 == 0x0A){
        start = time(NULL);
        printf("and press enter a second time when you exhale.. ");
    }

    enter2 = getchar();
    if (enter2 == 0x0A){
        end = time(NULL);
    }

    int time = (end - start);
    printf("you held your breath for %i seconds", time);
    exit(0);
}

