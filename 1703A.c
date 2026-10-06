#include<stdio.h>
#include<string.h>

int main()
{
    int t; // test cases
    int i; // iterator
    int count; // count of same elements
    char inputString[4]; // input string
    char fixedString[] = "YES"; // fixed string for comparision

    scanf("%d", &t);

    while (t > 0)
    {
        scanf("%s", inputString);

        i = 0;
        count = 0;

        while (i < 3)
        {
            if(inputString[i] == fixedString[i] + 32 || inputString[i] == fixedString[i])
            {
                count = count + 1;
            }
            i = i + 1;
        }

        if(count == 3)
        {
            printf("Yes\n");
        }
        else
        {
            printf("No\n");
        }

        t = t - 1;
    }
    return 0;
}