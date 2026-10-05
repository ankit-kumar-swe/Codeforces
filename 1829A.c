#include<stdio.h>
#include<string.h>

int main()
{
    int t; // test cases
    char operand1[] = "codeforces"; // first string of operator
    char operand2[11]; // second string of operator
    int i; // iterator variable for comparision
    int count; // count of different characters in two strings
    
    scanf("%d", &t);

    while (t > 0)
    {
        scanf("%s", operand2);
        i = 0;
        count = 0;

        while (operand1[i] != '\0')
        {
            if(operand1[i] != operand2[i])
            {
                count = count + 1;
            }
            i = i + 1;
        }

        printf("%d\n", count);

        t = t - 1;
    }
    return 0;
}