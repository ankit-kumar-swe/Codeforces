#include<stdio.h>
#include<stdlib.h>

int max(int, int);
int min(int, int);
int main()
{
    int t; // no of test cases
    int a, b, c; // inputs
    int centerPoint; // person sitting opposite to 1
    int totalPoints; // total no of persons sitting on table

    scanf("%d", &t);
    while (t > 0)
    {
        scanf("%d %d %d", &a, &b, &c);
        centerPoint = max(a, b) - (min(a, b) - 1);
        totalPoints = 2 * (centerPoint - 1);

        if(a > totalPoints || b > totalPoints || c > totalPoints)
        {
            printf("%d\n", -1);
        }
        else
        {
            if(c >= centerPoint)
            {
                printf("%d\n", (c - centerPoint) + 1);
            }
            else
            {
                printf("%d\n", (c - 1) + centerPoint);
            }
        }
        t = t - 1;
    }
}
int max(int a, int b)
{
    if(a > b)
    {
        return a;
    }
    return b;
}
int min(int a, int b)
{
    if(a < b)
    {
        return a;
    }
    return b;
}
