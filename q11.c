#include <stdio.h>

int main(int argc, char *argv[]) {
    int myAge = 45;
    int *yourAge;
    yourAge = &myAge;

    printf("myAge: %d \n", myAge);
    printf("&myAge: %p \n", &myAge);
    printf("yourAge: %p \n", yourAge);

    printf("*yourAge: %d \n", *yourAge);
    printf("&yourAge: %p \n", &yourAge);

    myAge = 3;

    printf("myAge: %d \n", myAge);
    printf("*yourAge: %d \n", *yourAge);

    *yourAge = 25;

    printf("myAge: %d \n", myAge);
    printf("*yourAge: %d \n", *yourAge);
} 
