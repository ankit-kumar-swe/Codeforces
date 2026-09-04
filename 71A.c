#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
    int n; // no of words
    char word[100]; // input word

    scanf("%d", &n);
    while(n > 0)
    {
        scanf("%s", word);

        if(strlen(word) > 10)
        {
            printf("%c%zu%c\n", word[0], strlen(word) - 2, word[strlen(word) - 1]);
        }
        else
        {
            printf("%s\n", word);
        }

        n = n - 1;
    }

    return 0;
}