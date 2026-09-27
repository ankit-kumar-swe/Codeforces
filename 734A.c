#include<stdio.h>
#include<string.h>

int main()
{
    int i = 0; // iterator
    int n = 0; // no of Games played b/w Anton & Danik
    int countA = 0; // count of Anton's Wins
    int countD = 0; // count of Danik's Wins

    scanf("%d", &n);

    char inputString[n]; // input string
    
    scanf("%s", inputString);

    while (i < n)
    {
        if(inputString[i] == 'A')
        {
            countA = countA + 1;
        }
        else
        {
            countD = countD + 1;
        }
        i = i + 1;
    }

    if(countA > countD)
    {
        printf("Anton");
    }
    else if(countA < countD)
    {
        printf("Danik");
    }
    else
    {
        printf("Friendship");
    }
    return 0;
}