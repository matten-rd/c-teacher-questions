#include <stdio.h>
#include <stdlib.h>

typedef struct Time
{
    int hours;
    int minutes;
    int seconds;
} Time;

Time createTime(int h, int m, int s)
{
    Time time;
    time.hours = h;
    time.minutes = m;
    time.seconds = s;
    return time;
}

void printTimeArray(Time *timeArr, int count)
{
    for (int i = 0; i < count; i++)
    {
        printf("hours (time%d) : %d\n", i, timeArr[i].hours);
    }
}

int main(int argc, char const *argv[])
{
    int count = 5;
    Time times[count];

    for (int i = 0; i < count; i++)
    {
        times[i] = createTime(i, 12, 12);
    }

    printTimeArray(times, count);

    return 0;
}