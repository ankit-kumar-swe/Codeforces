#include<stdio.h>
#include<string.h>

int main()
{
    int i = 0; // iterator
    int countUpperCase = 0; // count of uppercase letters in word
    int countLowerCase = 0; // count of lowercase letters in word
    char s[101]; // input string

    scanf("%s", s);

    while (i < 101)
    {
        if(s[i] >= 'a' && s[i] <= 'z')
        {
            countLowerCase = countLowerCase + 1;
        }
        else
        {
            countUpperCase = countUpperCase + 1;
        }
        i = i + 1;
    }

    i = 0;
    if(countUpperCase > countLowerCase)
    {
        while (i < 101)
        {
            if(s[i] >= 'a' && s[i] <= 'z')
            {
                s[i] = s[i] - 32;
            }
            i = i + 1;
        }
    }
    else
    {
        while (i < 101)
        {
            if(s[i] >= 'A' && s[i] <= 'Z')
            {
                s[i] = s[i] + 32;
            }
            i = i + 1;
        }
    }
    
    printf("%s", s);

    return 0;
}