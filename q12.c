#include <stdio.h>

/**
 * Prints every second value in an array 
 */
void printMe(int arr[], int size)
{
    // the stopping criteria works since arr is pointing to the first element in arr and pArr is moved from first to last element
    for (int *pArr = arr; (pArr - arr) < size; pArr+=2) 
    {
        printf("age: %d, adress: %p\n", *pArr, pArr); // pArr is the same as &(*pArr)
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