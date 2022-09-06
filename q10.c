#include <stdio.h>

void swap(int* pa, int* pb)
{
    int temp = *pa; // set a temporary variable to the value stored at pa to not lose it when setting pa to pb
    *pa = *pb;      // set value of pa to value of pb
    *pb = temp;     // lastly, set value of pb to temp (value of pa), completing the swap
}

int main(int argc, char const *argv[])
{
    int a, b;

    a = 10;
    b = 20;

    printf("Before swap\na=%d (adress: %p), b=%d (adress: %p)\n\n", a,&a, b, &b);

    // pass the adress of a and b and then the swap function swaps the values stored at those adresses
    swap(&a, &b);

    printf("After swap\na=%d (adress: %p), b=%d (adress: %p)\n", a, &a, b, &b);

    return 0;
}
