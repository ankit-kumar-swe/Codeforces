#include<stdio.h>

int main()
{
    int t, n; // inputs

    scanf("%d", &t);
    while(t > 0)
    {
        scanf("%d", &n);
        printf("%d\n", (int)(n / 10) + (int)(n % 10));
        t = t - 1;
    }
    return 0;
}