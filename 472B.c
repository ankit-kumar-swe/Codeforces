#include<stdio.h>
#include<stdlib.h>

int main()
{
    int N;
    int i = 0; // iterator pointer
    int sumRight = 0; // length of stick on right side
    int sumLeft = 0; // length of stick on left side
    int difference = 1000000; // difference in length of two parts

    scanf("%d", &N);

    int *lengths = (int *)malloc(N * sizeof(int)); // lengths of parts of stick

    while(i < N)
    {
        scanf("%d", &lengths[i]);
        sumRight = sumRight + lengths[i];
        i = i + 1;
    }
    
    i = 0;
    while(i < N)
    {
        sumLeft = sumLeft + lengths[i];
        sumRight = sumRight - lengths[i];

        if(abs(sumRight - sumLeft) < difference)
        {
            difference = abs(sumRight - sumLeft);
        }

        i = i + 1;
    }
    printf("%d", difference);
    return 0;
}