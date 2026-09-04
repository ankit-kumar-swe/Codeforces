#include<stdio.h>

int main()
{
    int n;

    scanf("%d", &n);

    if(n % 2 == 0)
    {
        printf("%d %d", 4, n - 4);
    }
    else
    {
        printf("%d %d", 9, n - 9);
    }

    return 0;
}