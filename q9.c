#include <stdio.h>

void makeAcute(int v) 
{
    if (v > 90) 
    {
        v = v - 90;
    }
    return;
}

int main() 
{
    int angle = 137;
    printf("before: %d\n", angle);
    makeAcute(angle);
    printf("after: %d\n", angle);
} 