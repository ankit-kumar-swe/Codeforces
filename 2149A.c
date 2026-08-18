// time: 46ms memory: 0KB
#include<stdio.h>
#include<stdlib.h>

int main()
{
    int t; // no of test cases
    int n; // no of array elements
    int element; // input element
    int countZero = 0; // count of a[i] = 0
    int countMinusOne = 0; // count of a[i] = -1

    scanf("%d", &t);
    while(t > 0)
    {
        scanf("%d", &n);
        while(n > 0)
        {
            scanf("%d", &element);
            if(element == -1)
            {
                countMinusOne = countMinusOne + 1;
            }
            if(element == 0)
            {
                countZero = countZero + 1;
            }
            n = n - 1;
        }
        if(countMinusOne % 2 == 0)
        {
            printf("%d\n", countZero);
        }
        else
        {
            printf("%d\n", 2 + countZero);
        }
        countZero = 0;
        countMinusOne = 0;
        t = t - 1;
    }
    return 0;
}
// time: 31ms memory: 100KB
#include<stdio.h>
#include<stdlib.h>

int main()
{
    int t; // no of test cases
    int n; // no of array elements
    int i = 0;
    int countZero = 0; // count of a[i] = 0
    int countMinusOne = 0; // count of a[i] = -1

    scanf("%d", &t);
    while(t > 0)
    {
        scanf("%d", &n);
        int numbers[n];
        i = 0;
        while(i < n)
        {
            scanf("%d", &numbers[i]);
            if(numbers[i] == -1)
            {
                countMinusOne = countMinusOne + 1;
            }
            if(numbers[i] == 0)
            {
                countZero = countZero + 1;
            }
            i = i + 1;
        }
        if(countMinusOne % 2 == 0)
        {
            printf("%d\n", countZero);
        }
        else
        {
            printf("%d\n", 2 + countZero);
        }
        countZero = 0;
        countMinusOne = 0;
        t = t - 1;
    }
    return 0;
}