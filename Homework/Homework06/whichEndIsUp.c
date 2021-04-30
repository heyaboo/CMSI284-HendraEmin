#include <stdio.h>
 
#define BIG_ENDIAN 0
#define LITTLE_ENDIAN 1
 
int networkByteOrder() {
        short int num = 0xABCD;
        char* b = (char*) &num;
        return (b[0] ? LITTLE_ENDIAN : BIG_ENDIAN);
}
 
int main() {
        int order = networkByteOrder();
        printf("Our Stanley/Penguin machine is a %s\n", order == LITTLE_ENDIAN ? "Little Endian" : "Big Endian");
        return order;
}
