#include <stdio.h>

int main(int argc, char const *argv[])
{
    int x = 25;
    float y = 45.23432;

    int a = x * y;
    float b = x * y;
    unsigned int c = x * y;
    unsigned int d = -25 * y;

    printf(" a: %d\n b: %f\n c: %u\n d: %u\n", a, b, c, d);

    return 0;
}
