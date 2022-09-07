#include <stdio.h>
#include <stdlib.h>

typedef struct Time
{
    int hours;
    int minutes;
    int seconds;
} time;

time createTime(int h, int m, int s)
{
    time time;
    time.hours = h;
    time.minutes = m;
    time.seconds = s;
    return time;
}

time* createTimeArray(int count) 
{
    time *times = malloc(sizeof(*times) * count);

    for (int i = 0; i < count; i++)
    {
        times[i] = createTime(i, 12, 12);
    }

    return times;
}

void printTimeArray(time *timeArr, int count)
{
    for (int i = 0; i < count; i++)
    {
        printf("hours (time%d) : %d\n", i, timeArr[i].hours);
    }
}

void destroyTimeArray(time *timeArr)
{
    free(timeArr);
}

int main(int argc, char const *argv[])
{
    int count = 5;
    time *pTimes;
    pTimes = createTimeArray(count);

    printTimeArray(pTimes, count);

    destroyTimeArray(pTimes);

    return 0;
}