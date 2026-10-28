#include<stdio.h>
#include<string.h>

int main()
{
    int i; // iterator
    int fulcrum; // position of fulcrum in lever arrangement
    char s[1000001]; // input string about lever arrangement

    long long forceLeft = 0; // force on left side of fulcrum
    long long forceRight = 0; // force on right side of fulcrum

    scanf("%s", s);
    // finding fulcrum position
    i = 0;
    while (s[i] != '^')
    {
        i = i + 1;
    }

    fulcrum = i;
    // fulcrum position found

    // calculating force exerted by weigths on the left side of fulcrum
    i = 0;
    while (i < fulcrum)
    {
        if(s[i] != '=')
        {
            forceLeft = forceLeft + (s[i] - '0')*(fulcrum - i);
        }
        i = i + 1;
    }
    // force on left side is now calculated

    // force on right side of fulcrum due to weights
    i = fulcrum + 1;
    while (s[i] != '\0')
    {
        if(s[i] != '=')
        {
            forceRight = forceRight + (s[i] - '0')*(i - fulcrum);
        }
        i = i + 1;
    }

    // final position of lever
    if(forceLeft > forceRight)
    {
        printf("left");
    }
    else if(forceLeft < forceRight)
    {
        printf("right");
    }
    else
    {
        printf("balance");
    }
    return 0;
}