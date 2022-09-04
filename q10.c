#include <stdio.h>

void swap(int *pa, int *pb)
{
    int temp = *pa;
    *pa = *pb;
    *pb = temp;
}

int main(int argc, char const *argv[])
{
    int a, b;

    a = 10;
    b = 20;

    printf("Before swap\na=%d, b=%d\n\n", a, b);

    swap(&a, &b);

    printf("After swap\na=%d, b=%d\n", a, b);

    return 0;
}
