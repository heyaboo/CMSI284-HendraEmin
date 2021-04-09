////////////////////////////////
// Below is for question no.3 //
////////////////////////////////

#include <stdio.h>

int main(int n) {
    int i = 2; //not sure why this doesn't start the table from 2
    int j = 2; //not sure why this doesn't start the table from 2
    printf("%4c|", ' ');
    for (i = 2; i <= n; i++) {
        printf("%4d", i);
    }
    printf("\n");

    for (i = 2; i <= n; i++) {
        printf("%4d|", i);
        for (j = 2; j <= n; j++) {
            printf("%4d", i*j);
        }
        printf("\n");
    }
}

