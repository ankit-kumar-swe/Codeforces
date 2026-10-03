#include<stdio.h>
#include<string.h>

int main()
{
    int t; // test cases
    int i = 0; // iterator
    char string[101]; // input string for each test case

    scanf("%d", &t);

    while (t > 0)
    {
        scanf("%s", string);
        
        if(strlen(string) % 2 == 0)
        {
            i = 0;
            while (2 * i < strlen(string))
            {
                if(string[i] == string[i + (strlen(string)/2)])
                {
                    i = i + 1;
                }
                else
                {
                    break;
                }
            }
            if(i == (strlen(string) / 2))
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
            printf("nO\n");
        }
        t = t - 1;
    }
    return 0;
}