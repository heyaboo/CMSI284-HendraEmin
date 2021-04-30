#include "makeNBOC.h"

int main() {
        unsigned int unsignedInt;
        unsigned int testNum;

        printf("Enter a 32-bit unsigned integer to proceed: ");
        scanf("%d", &unsignedInt);

        testNum = networkByteOrder(unsignedInt);

        printf("%s\n", testNum == LITTLE_ENDIAN ? "Little Endian" : "Big Endian");
        return unsignedInt;
}
