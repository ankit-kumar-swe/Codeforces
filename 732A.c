#include<stdio.h>

int main()
{
    int k, r; // inputs
    int count = 1; // no of shovels (output)

    scanf("%d %d", &k, &r);
    int totalCost = k;

    while((totalCost % 10) != 0 && (totalCost % 10) != r)
    {
        count = count + 1;
        totalCost = k * count;
    }
    printf("%d", count);
    return 0;
}