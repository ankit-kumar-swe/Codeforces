#include<stdio.h>
#include<stdlib.h>

int main()
{
    int t; // no of test cases
    int a, b, c; // position of elevators and movement direction

    scanf("%d", &t);
    while(t > 0)
    {
        scanf("%d %d %d", &a, &b, &c);
        if(abs(a - 1) < (abs(b - c) + abs(c - 1)))
        {
            printf("%d\n", 1);
        }
        else if(abs(a - 1) > (abs(b - c) + abs(c - 1)))
        {
            printf("%d\n", 2);
        }
        else
        {
            printf("%d\n", 3);
        }
        t = t - 1;
    }
    return 0;
}