#include<stdio.h>
#include<string.h>

int main()
{
    int i = 0; // iterator over array
    int j; // iterator to remove duplicates
    int strLength; // length of the input string
    int count = 0; // count of distinct characters
    char userName[101]; // input string

    scanf("%s", userName);
    strLength = strlen(userName);

    while(i < strLength - 1)
    {
        j = i + 1;
        while(j < strLength)
        {
            if(userName[i] == userName[j])
            {
                userName[j] = '0';
            }
            j = j + 1;
        }
        i = i + 1;
    }

    i = 0;
    while(i < strLength)
    {
        if(userName[i] >= 'a' && userName[i] <= 'z')
        {
            count = count + 1;
        }
        i = i + 1;
    }

    if(count % 2 == 0)
    {
        printf("CHAT WITH HER!");
    }
    else
    {
        printf("IGNORE HIM!");
    }
    
    return 0;
}