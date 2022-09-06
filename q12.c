#include <stdio.h>

void printMe(int arr[], int size) // int *arr, int size
{
    // Stops when 
    for (int *pArr = arr; (pArr - arr) < size; pArr++) 
    {
        printf("age: %d, adress: %p\n", *pArr, pArr);
    }
}

int main(int argc, char *argv[]) 
{
    int ages[20] = {
        4523, 5, 123, 10, 785, 15, 291, 20,
        68311, 25, 142, 30, 9143, 35,
        653, 40, 921, 45, 1356, 50
    };
    printMe(ages, sizeof(ages) / sizeof(int));
} 