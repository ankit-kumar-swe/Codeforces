#include<stdio.h>

int main()
{
    int n; // types of orange juices available
    int percent; // percentage of orange juice in one mixture
    int sum = 0;  // total amount of orange juice content in one mixture
    int juicesCount;
    float juiceContent;
    scanf("%d", &n);
    juicesCount = n;
    while(n > 0)
    {
        scanf("%d", &percent);
        sum = sum + percent;
        n = n - 1;
    }
    juiceContent = (float)sum / juicesCount;
    printf("%f", juiceContent);
    return 0;
}