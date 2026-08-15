#include<stdio.h>
#include<stdlib.h>

int main()
{
    int t; // no of test cases
    int x, y, z; //inputs
    int equalElement, unequalElement;

    scanf("%d", &t);
    while(t > 0)
    {
        scanf("%d %d %d", &x, &y, &z);
        if(x == y)
        {
            equalElement = x;
            unequalElement = z;
        }
        else if(y == z)
        {
            equalElement = y;
            unequalElement = x;
        }
        else if(x == z)
        {
            equalElement = x;
            unequalElement = y;
        }
        else
        {
            printf("NO\n");
            t = t - 1;
            continue;
        }
        
        if(equalElement == unequalElement)
        {
            printf("YES\n");
            printf("%d %d %d\n", equalElement, equalElement, equalElement);
        }
        else if(equalElement >= unequalElement)
        {
            printf("YES\n");
            printf("%d %d %d\n", equalElement, unequalElement, 1);
        }
        else
        {
            printf("NO\n");
        }
        t = t - 1;
    }
    return 0;
}