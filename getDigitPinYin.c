#include "getDigitPinYin.h"

void getDigitPinYin()
{
    int x;
    int isNegative = 0;
    printf("请输入一个整数[-100000,100000]：");
    scanf("%d", &x);

    if (x < 0)
    {
        isNegative = 1;
        x = -x;
        printf("fu ");
    }

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

        switch (d)
        {
            case 0:
                printf("ling");
                break;
            case 1:
                printf("yi");
                break;
            case 2:
                printf("er");
                break;
            case 3:
                printf("san");
                break;
            case 4:
                printf("si");
                break;
            case 5:
                printf("wu");
                break;
            case 6:
                printf("liu");
                break;
            case 7:
                printf("qi");
                break;
            case 8:
                printf("ba");
                break;
            case 9:
                printf("jiu");
                break;
            default:
                printf("unown");
                break;
        }        

        if (mask >= 10)
        {
            printf(" ");
        }
        x %= mask;
        mask /= 10;

    } while (mask > 0);
    printf("\n");
}
