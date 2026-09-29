#include<stdio.h>
#include<string.h>

int main()
{
    int i = 0; // iterator over string
    char s[101], t[101], reverseString[101];

    scanf("%s", s);
    scanf("%s", t);

    while (s[i] != '\0')
    {
        reverseString[i] = s[strlen(s) - 1 - i];
        i = i + 1;
    }
    
    reverseString[i] = '\0';

    if(strcmp(reverseString, t) == 0)
    {
        printf("YES");
        return 0;
    }

    printf("NO");

    return 0;
}