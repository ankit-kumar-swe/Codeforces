#include<stdio.h>

int main()
{
    int n, m, a; // inputs
    long long tilesLength, tilesBreadth; // no of tiles needed along length and breadth

    scanf("%d %d %d", &n, &m, &a);
    if(n % a == 0)
    {
        tilesLength = n / a;
    }
    else
    {
        tilesLength = (int)(n / a) + 1;
    }

    if(m % a == 0)
    {
        tilesBreadth = m / a;
    }
    else
    {
        tilesBreadth = (int)(m / a) + 1;
    }

    printf("%lld", tilesBreadth * tilesLength);

    return 0;
}