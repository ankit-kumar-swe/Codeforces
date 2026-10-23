#include<stdio.h>
#include<math.h>

// int roundoff(float);

int main()
{
    int i = 0; // iterator
    int n; // marks scored
    int k; // maximum marks for any subject
    int inputMarks; // inputmarks of Noora
    int additionalMarks = 0; // additional marks added by Leha
    int sum = 0; // sum of all marks scored by Noora
    float average; // average of all marks scored by Noora

    scanf("%d %d", &n, &k);

    while(i < n)
    {
        scanf("%d", &inputMarks);
        sum = sum + inputMarks;
        i = i + 1;
    }

    average = (float)sum / n;

    while(round(average) != k)
    {
        sum = sum + k;
        additionalMarks = additionalMarks + 1;
        average = (float)sum / (n + additionalMarks);
    }
    printf("%d", additionalMarks);

    return 0;
}
/* Roundoff function
int roundoff(float a)
{
    if(a - (int)a > 0.49)
    {
        return (int)a + 1;
    }
    else
    {
        return (int)a;
    }
}
*/