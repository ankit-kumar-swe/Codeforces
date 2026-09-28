#include<stdio.h>
#include<stdbool.h>
#include<stdlib.h>

int main()
{
    int i = 0; // iterator
    int n; // input size of string
    char matchingChar = 'a';
    bool status = false;
    scanf("%d", &n);
    
    char inputString[n + 1];
    scanf("%s", inputString);
    
    while (matchingChar <= 'z')
    {
        i = 0;
        while (inputString[i] != '\0')
        {
            if(inputString[i] == matchingChar || inputString[i] == matchingChar - 32)
            {
                status = true;
                break;
            }
            i = i + 1;
        }
        if(status == false)
        {
            printf("No\n");
            exit(0);
        }
        status = false;
        matchingChar = matchingChar + 1;
    }
    printf("Yes\n");
    
    return 0;
}