#include<stdio.h>

int main()
{
    int t; // testcases
    int n; // number
    int count = 0; // no of round numbers required
    int i = 0; // iterator for array
    int roundNumbers[4]; // array of round numbers that sum up to n
    int multiplier = 1; // multiplier to generate round numbers

    scanf("%d", &t);
    
    while(t > 0)
    {
        scanf("%d", &n);
        while(n > 0)
        {
            if(n % 10 != 0)
            {
                count = count + 1;
                roundNumbers[i] = (n % 10) * (multiplier);
                i = i + 1;
            }
            n = n / 10;
            multiplier = multiplier * 10;
        }
        printf("%d\n", count);
        count = 0; // reusing variable
        while(count < i)
        {
            printf("%d ", roundNumbers[count]);
            count = count + 1;
        }
        i = 0;
        count = 0;
        multiplier = 1;
        printf("\n");
        t = t - 1;
    }
    return 0;
}