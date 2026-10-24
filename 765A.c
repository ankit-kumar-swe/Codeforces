#include<stdio.h>
#include<string.h>

int main()
{
    int i = 0; // iterator
    int n;
    char hometownAirport[4];
    char travellingRoute[9];

    scanf("%d", &n);
    scanf("%s", hometownAirport);
    
    while (i < n)
    {
        scanf("%s", travellingRoute);
        i = i + 1;
    }
    
    if(n % 2 == 0)
    {
        printf("home");
    }
    else
    {
        printf("contest");
    }
    return 0;
}