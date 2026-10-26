#include<stdio.h>

int main()
{
    int n; // no of pairs
    int a, b; // elements of pair
    int operationsCount; // count of operations performed for a pair
    int temp;

    scanf("%d", &n);

    while (n > 0)
    {
        scanf("%d %d", &a, &b);

        operationsCount = 0;

        while (a > 0 && b > 0)
        {
            if(b > a)
            {
                temp = a;
                a = b;
                b = temp;
            }

            operationsCount = operationsCount + (int)(a/b);

            a = a % b;
        }

        printf("%d\n", operationsCount);

        n = n - 1;
        
    }
    
    return 0;
}