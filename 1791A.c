#include<stdio.h>
#include<string.h>

int main()
{
    char string[] = "codeforces";
    int i = 0; // iterator
    int t; // test cases
    char character;

    scanf("%d", &t);

    while (t > 0)
    {
        scanf(" %c", &character);

        while (string[i] != '\0')
        {
            if(string[i] == character)
            {
                printf("yES\n");
                break;
            }
            i = i + 1;
        }

        if(string[i] == '\0')
        {
            printf("No\n");
        }

        i = 0;
        t = t - 1;
    }
    return 0;
}