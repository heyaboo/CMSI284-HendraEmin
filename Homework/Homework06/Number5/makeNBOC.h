#include <stdio.h>
 
#define BIG_ENDIAN 0
#define LITTLE_ENDIAN 1
 
int networkByteOrder(int digits) {
        unsigned int num = digits;
        char* b = (char*) &num;
        return (b[0] ? LITTLE_ENDIAN : BIG_ENDIAN);
}
