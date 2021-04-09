////////////////////////////////
// Below is for question no.1 //
////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

int main() {
    int binaryNum[100];
    int input;
    int i; //for loop initialization
    printf ("Enter the decimal you want to convert: ");
    scanf ("%d",&input);
    for(i = 0; input > 0; i++) {
        binaryNum[i] = input%2;
        input = input/2;
    }
    printf("\nThe Binary Num of the given decimal number is = ");
    for(i = i-1; i >= 0; i--) {
        printf("%d",binaryNum[i]);
    }
    return 0;
}

