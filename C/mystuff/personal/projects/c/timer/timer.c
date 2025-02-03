#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>

int main(void)
{
    int hour = 0;
    int min = 0;
    int sec = 0;

    while (1)
    {
        printf("%02d : %02d : %02d \n", hour, min, sec);
        fflush(stdout);
        sec++;
        if (sec == 60)
        {
            min++;
            sec = 0;
        }
        if (min == 60)
        {
            hour++;
            min = 0;
        }
        if (hour == 24 && min == 60 && sec == 60)
        {
            hour = 0;
            min = 0;
            sec = 0;
        }
        sleep(1);
    }
    return 0;
}
