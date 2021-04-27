#include <stdio.h>

int main()
{
    //variables for the integers that we are going to be operating on
    int numOne;
    int numTwo;
    int gcd;

    //prompt user to enter two integers
    printf("Enter two integers with separated by a space: ");
    scanf("%d %d", &numOne, &numTwo);

    //finding gcd
    for(int i = 1; i <= numOne && i <= numTwo; ++i)
    {  
        if(numOne % i == 0 && numTwo % i == 0) {
            gcd = i;
        }
    }

    //print out the result
    printf("The GCD of %d and %d = %d", numOne, numTwo, gcd);

    return 0;
}
