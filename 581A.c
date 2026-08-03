#include<stdio.h>

int min(int, int);
int max(int, int);
int main()
{
    int a, b; // inputs

    scanf("%d %d", &a, &b);
    printf("%d %d", min(a, b), (max(a, b) - min(a, b)) / 2);
    return 0;
}
int min(int a, int b)
{
    if(a < b)
    {
        return a;
    }
    return b;
}
int max(int a, int b)
{
    if(a > b)
    {
        return a;
    }
    return b;
}