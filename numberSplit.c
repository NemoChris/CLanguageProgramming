#include "numberSplit.h"
void splitNumber()
{
    int x;
    printf("请输入一个正整数：");
    scanf("%d",&x);    
    int mask = 1;
    int t = x;
    while (t >= 10)
    {
        t /= 10;
        mask *= 10;
    }

    do
    {
        int d = x / mask;
        printf("%d", d);

        if (mask >= 10)
        {
            printf(" ");
        }
        x %= mask;
        mask /= 10;

    } while (mask > 0);
    printf("\n");
}
