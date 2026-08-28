#include<stdio.h>

int main()
{
    int t; // no of test cases
    int b, c, h; // no of slices of bread, cheese and ham
    int layers = 0; // no of layers of a sandwich possible
    int i = 1; // keeps track of a layer of bread or filling

    scanf("%d", &t);
    while(t > 0)
    {
        scanf("%d %d %d", &b, &c, &h);

        i = 1;
        layers = 0;
        while(b > 0 && (c > 0 || h > 0))
        {
            if(i % 2 != 0)
            {
                b = b - 1;
            }
            else
            {
                if(c > 0)
                {
                    c = c - 1;
                }
                else
                {
                    h = h - 1;
                }
            }
            layers = layers + 1;
            i = i + 1;
        }
        t = t - 1;
        if(i % 2 != 0)
        {
            layers = layers + 1;
        }
        printf("%d\n",layers);
    }
}