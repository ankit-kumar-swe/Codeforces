#include<stdio.h>

int main()
{
    int t; // test cases
    int x, y; // coordinates of router
    int R; // coverage of router

    scanf("%d", &t);

    while (t > 0)
    {
        scanf("%d %d %d", &x, &y, &R);

        printf("%d %d\n", x, y + R);

        t = t - 1;
    }
    return 0;
}