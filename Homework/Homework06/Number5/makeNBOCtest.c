#include "makeNBOC.h"

int main() {
        int unsignedInt = 0x0332;
        printf("%s\n", unsignedInt == LITTLE_ENDIAN ? "Little Endian" : "Big Endian");
        return unsignedInt;
}
