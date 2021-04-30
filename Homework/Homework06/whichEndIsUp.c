#include <stdio.h>
 
#define BIG_ENDIAN 0
#define LITTLE_ENDIAN 1
 
int networkByteOrder() {
        short int word = 0x0001;
        char* b = (char*) &word;
        return (b[0] ? LITTLE_ENDIAN : BIG_ENDIAN);
}
 
int main() {
        int r = networkByteOrder();
        printf("%s\n", r == LITTLE_ENDIAN ? "Little Endian" : "Big Endian");
        return r;
}
