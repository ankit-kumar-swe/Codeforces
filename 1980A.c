#include<stdio.h>

int main()
{
    int t; // test cases
    int m, n; // no of rounds and no of problems available
    int reqProblems = 0; // no of problems required to conduct m rounds
    int countA, countB, countC, countD, countE, countF, countG; // to count no of problems of each difficulty
    int i = 0;
    countA = countB = countC = countD = countE = countF = countG = 0;

    scanf("%d", &t);
    while(t > 0)
    {
        scanf("%d %d", &n, &m);
        char inputString[n + 1];
        scanf("%s", &inputString);
        inputString[n] = '\0';
        while(i < n)
        {
            if(inputString[i] == 'A')
            {
                countA = countA + 1;
            }
            else if(inputString[i] == 'B')
            {
                countB = countB + 1;
            }
            else if(inputString[i] == 'C')
            {
                countC = countC + 1;
            }
            else if(inputString[i] == 'D')
            {
                countD = countD + 1;
            }
            else if(inputString[i] == 'E')
            {
                countE = countE + 1;
            }
            else if(inputString[i] == 'F')
            {
                countF = countF + 1;
            }
            else
            {
                countG = countG + 1;
            }
            i = i + 1;
        }
        if(countA < m)
        {
            reqProblems = m - countA;
        }
        if(countB < m)
        {
            reqProblems = reqProblems + m - countB;
        }
        if(countC < m)
        {
            reqProblems = reqProblems + m - countC;
        }
        if(countD < m)
        {
            reqProblems = reqProblems + m - countD;
        }
        if(countE < m)
        {
            reqProblems = reqProblems + m - countE;
        }
        if(countF < m)
        {
            reqProblems = reqProblems + m - countF;
        }
        if(countG < m)
        {
            reqProblems = reqProblems + m - countG;
        }
        printf("%d\n", reqProblems);
        i = reqProblems = countA = countB = countC = countD = countE = countF = countG = 0;
        t = t - 1;
    }
}