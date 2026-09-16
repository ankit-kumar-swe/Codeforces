#include<stdio.h>

int main()
{
    int t; // test cases
    int n; // input size of array
    int i; // iterator

    scanf("%d", &t);

    while (t > 0)
    {
        scanf("%d", &n);
        if(((n / 2)) % 2 == 0)
        {
            printf("YES\n");

            i = 2;
            while (i <= n)
            {
                printf("%d ", i);
                i = i + 2;
            }
            i = 1;
            while (i < n - 1)
            {
                printf("%d ", i);
                i = i + 2;
            }
            printf("%d\n", n + (n / 2) - 1);
        }

        else
        {
            printf("NO\n");
        }

        t = t - 1;
    }
    
}