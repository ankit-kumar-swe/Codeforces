#include<stdio.h>
#include<stdlib.h>

int main()
{
    int t; // test cases
    int n; // size of input array for each test case
    int i; // iterator over array
    int value1; // first value in Array
    int value2; // second value in Array
    int countValue1; // frequency count of first value
    int countValue2; // frequency count of second value

    scanf("%d\n", &t);

    while (t > 0)
    {
        scanf("%d\n", &n);

        int *arr = (int *)malloc(n * sizeof(int)); // array
        i = 0; // iterator initialization
        while (i < n)
        {
            scanf("%d", &arr[i]);
            i = i + 1;
        }

        i = 0;
        value1 = arr[0];

        while (i < n)
        {
            if(arr[i] != value1)
            {
                value2 = arr[i];
                break;
            }
            i = i + 1;
        }
        
        if(i == n)
        {
            printf("Yes\n");
        }
        else
        {
            i = 0;
            countValue1 = countValue2 = 0;
            while (i < n)
            {
                if(arr[i] != value1 && arr[i] != value2)
                {
                    printf("No\n");
                    break;
                }
                else if(arr[i] == value1)
                {
                    countValue1 = countValue1 + 1;
                }
                else
                {
                    countValue2 = countValue2 + 1;
                }
                i = i + 1;
            }
            if(i < n)
            {
                t = t - 1;
                continue;
            }
            else
            {
                    if(n % 2 == 0)
                {
                    if (countValue1 == countValue2)
                    {
                        printf("yES\n");
                    }
                    else
                    {
                        printf("No\n");
                    }
                }
                else
                {
                    if(abs(countValue1 - countValue2) == 1)
                    {
                        printf("Yes\n");
                    }
                    else
                    {
                        printf("No\n");
                    }
                }
            }
            
        }

        free(arr);
        t = t - 1;
    }
    return 0;
}