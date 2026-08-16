#include<stdio.h>
#include<stdlib.h>

int max(int, int);
int main()
{
    int t; // no of test cases
    int a, b, c; // inputs
    int maxNum;

    scanf("%d", &t);
    while(t > 0)
    {
        scanf("%d %d %d", &a, &b, &c);
        maxNum = max(a, max(b, c));
        if(a == b && b == c)
        {
            printf("%d %d %d\n", 1, 1, 1);
        }
        else if(maxNum == a)
        {
            if(a != b && a != c)
            {
                printf("%d %d %d\n", 0, abs(maxNum - b) + 1, abs(maxNum - c) + 1);
            }
            else
            {
                printf("%d %d %d\n", 1, abs(maxNum - b) + 1, abs(maxNum - c) + 1);
            }
        }
        else if(maxNum == b)
        {
            if(b != c && b != a)
            {
                printf("%d %d %d\n", abs(maxNum - a) + 1, 0, abs(maxNum - c) + 1);
            }
            else
            {
                printf("%d %d %d\n", abs(maxNum - a) + 1, 1, abs(maxNum - c) + 1);
            }
        }
        else
        {
            if(a != c && b != c)
            {
                printf("%d %d %d\n", abs(maxNum - a) + 1, abs(maxNum - b) + 1, 0);
            }
            else
            {
                printf("%d %d %d\n", abs(maxNum - a) + 1, abs(maxNum - b) + 1, 1);
            }
        }
        t = t - 1;
    }
    return 0;
}
int max(int a, int b)
{
    if(a > b)
    {
        return a;
    }
    return b;
}