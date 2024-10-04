#include <stdio.h>
#include <stdint.h>
int main()
{
    printf("sizeof(char) %lu byte(s)\n", sizeof(char));
    printf("sizeof(short) %lu byte(s)\n", sizeof(short));
    printf("sizeof(int) %lu byte(s)\n", sizeof(int));
    printf("sizeof(long) %lu byte(s)\n", sizeof(long));  
    printf("sizeof(int32_t) %lu byte(s)\n", sizeof(int32_t));
    printf("sizeof(int64_t) %lu byte(s)\n", sizeof(int64_t));
    printf("sizeof(char*) %lu byte(s)\n", sizeof(char*));
    printf("sizeof(float) %lu byte(s)\n", sizeof(float));
    printf("sizeof(double) %lu byte(s)\n\n", sizeof(double));

    printf("sizeof(uint8_t) %lu byte(s)\n", sizeof(uint8_t));
    printf("sizeof(int8_t) %lu byte(s)\n", sizeof(int8_t));
    printf("sizeof(uint16_t) %lu byte(s)\n", sizeof(uint16_t));
    printf("sizeof(int16_t) %lu byte(s)\n", sizeof(int16_t));
    printf("sizeof(uint32_t) %lu byte(s)\n", sizeof(uint32_t));
    printf("sizeof(uint64_t) %lu byte(s)\n", sizeof(uint64_t));
    printf("sizeof(__uint128_t) %lu byte(s)\n", sizeof(__uint128_t));
    return 0;
}
