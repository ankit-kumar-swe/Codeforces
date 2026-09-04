#include<stdio.h>

int main()
{
    int k, l, m, n; // count of dragons hurt by various ways
    int d; // total no of dragons attacked
    int count = 0; // no of dragons that got hurt

    scanf("%d", &k);
    scanf("%d", &l);
    scanf("%d", &m);
    scanf("%d", &n);

    scanf("%d", &d);
    while(d > 0)
    {
        if(d % k == 0 || d % l == 0 || d % m == 0 || d % n == 0)
        {
            count = count + 1;
        }
        d = d - 1;
    }
    printf("\n%d", count);
}