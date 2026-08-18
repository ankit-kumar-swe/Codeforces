#include<stdio.h>

int main()
{
    int t; // no of test cases
    int n, m; // inputs

    scanf("%d", &t);
    while(t > 0)
    {
        scanf("%d %d", &n, &m);
        if(n < m)
        {
            printf("nO\n");
        }
        else
        {
            if((n - m) % 2 == 0)
            {
                printf("yeS\n");
            }
            else
            {
                printf("nO\n");
            }
        }
        t = t - 1;
    }
    return 0;
}