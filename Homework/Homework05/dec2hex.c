////////////////////////////////
// Below is for question no.2 //
////////////////////////////////

//We couldn't get to automatically print the leading zeros

#include <stdio.h>
#include <stdlib.h>

int main() {

    int num , hexCount;
    char hex [8] = {0,0,0,0,0,0,0,0};
    printf( " Enter a decimal number: " ) ;
    scanf( "%d", &num ) ;
    hexCount = 0 ;

    while( num > 0 ) {

        switch( num % 16 ) {
            case 10 :
              hex [hexCount] = 'A' ;
              break ;
            case 11 :
              hex [hexCount] = 'B';
              break ;
            case 12 :
              hex [hexCount] = 'C' ;
              break ;
            case 13 :
              hex [hexCount] = 'D';
              break ;
            case 14 :
              hex [hexCount] = 'E' ;
              break ;
            case 15 :
              hex [hexCount] = 'F';
              break ;
            default :
              hex [hexCount] = (num%16) + 0x30 ;
        }

    num /= 16 ;
    hexCount++ ;
    }

    printf("The Hexadecimal value ->  0x0000" ) ; //how to make the leading zeroes appear automatically?
    for( int i = (hexCount -1) ; i >= 0 ; i--){
    printf("%c" , hex[i]) ;
    }

    return 0;
}

