#include<stdio.h>

int main()
{
    int x; // snooze time
    int hh, mm; // input hours and minutes
    int snoozeCount = 0; // snooze count before jamie wakes up

    scanf("%d", &x);
    scanf("%d %d", &hh, &mm);

    while (!(hh / 10 == 7 || hh % 10 == 7 || mm / 10 == 7 || mm % 10 == 7))
    {
        mm = mm - x;

        if(mm < 0)
        {
            mm = mm + 60;
            hh = hh - 1;
        }
        if(hh < 0)
        {
            hh = hh + 24;
        }

        snoozeCount = snoozeCount + 1;
    }
    printf("%d", snoozeCount);

    return 0;
}