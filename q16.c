#include <stdio.h>

typedef struct Time {
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

Time sumTimes(Time t1, Time t2)
{
    int sumSeconds = t1.seconds + t2.seconds;
    int seconds = sumSeconds % 60;
    int extraMin = (sumSeconds - seconds) / 60;

    int sumMinutes = t1.minutes + t2.minutes + extraMin;
    int minutes = sumMinutes % 60;
    int extraHour = (sumMinutes - minutes) / 60;

    int hours = t1.hours + t2.hours + extraHour;

    return createTime(hours, minutes, seconds);
}


int main(int argc, char const *argv[])
{
    Time t1, t2, tSum;

    t1 = createTime(12, 54, 59);
    t2 = createTime(15, 16, 17);
    tSum = sumTimes(t1, t2);

    printf("Time1: %d:%d:%d\n", t1.hours, t1.minutes, t1.seconds);
    printf("Time2: %d:%d:%d\n", t2.hours, t2.minutes, t2.seconds);
    printf("TimeSum: %d:%d:%d\n", tSum.hours, tSum.minutes, tSum.seconds);

    return 0;
}
