#include <stdio.h>
 
#define BIG_ENDIAN 0
#define LITTLE_ENDIAN 1
 
int networkByteOrder() {
        short int num = 321;
        char* b = (char*) &num;
        return (b[0] ? LITTLE_ENDIAN : BIG_ENDIAN);
}
 
int main() {
        int r = networkByteOrder();
        printf("Our Stanley/Penguin machine is a %s\n", r == LITTLE_ENDIAN ? "Little Endian" : "Big Endian");
        return r;
}
