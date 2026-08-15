#include<stdio.h>

int main()
{
    int t; // test cases
    int k; // input

    scanf("%d", &t);
    while(t > 0)
    {
        scanf("%d", &k);
        if(k % 2 == 0)
        {
            printf("nO\n");
        }
        else
        {
            printf("yES\n");
        }
        t = t - 1;
    }
    return 0;
}