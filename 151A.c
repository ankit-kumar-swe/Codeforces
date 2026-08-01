#include<stdio.h>

int main()
{
    int n, k, l, c, d, p, nl, np; // inputs
    int a; // stores amount of soft drink required
    int min; // minimum of available ingredients
    scanf("%d %d %d %d %d %d %d %d", &n, &k, &l, &c, &d, &p, &nl, &np);

    a = (k * l) / nl;
    k = c * d;
    l = p / np;
    
    if(a < k)
    {
        if(a < l)
        {
            min = a;
        }
        else
        {
            min = l;
        }
    }
    else
    {
        if(k < l)
        {
            min = k;
        }
        else
        {
            min = l;
        }
    }
    printf("%d", min / n);
    return 0;
}