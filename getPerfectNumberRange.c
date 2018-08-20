#include "getPerfectNumberRange.h"

int getIsPerfectNumber(int number)
{

    int sum = 0;
    int isPerfectNumber = 0;
    for (int i = 1; i <= number / 2; i++)
    {

        if (number % i == 0)
        {
            sum += i;
        }
    }

    if (sum == number)
    {
        isPerfectNumber = 1;
    }

    return isPerfectNumber;
}

void getPerfectNumberRange(void)
{

    int n, m;
    int isHaveAnyPerfectNumber = 0;
    printf("请输入两个正整数n和m，（1<=n<m<1000）");
    scanf("%d %d", &n, &m);

    for (int i = n; i <= m; i++)
    {

        if (getIsPerfectNumber(i))
        {
            printf("%d", i);

            if (isHaveAnyPerfectNumber == 0)
            {
                isHaveAnyPerfectNumber = 1;
            }

            if (i < m)
            {
                printf(" ");
            }
        }

       
    }

    if (isHaveAnyPerfectNumber == 0)
    {
        printf("\n");
    }
}
