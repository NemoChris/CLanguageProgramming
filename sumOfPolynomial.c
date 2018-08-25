#include "sumOfPolynomial.h"

void sumOfPolynomial(void)
{
    int arr[100] = {0};
    int polynomialIndex = 0; //为2时终止循环
    int power = 0;           //幂次
    int coefficient = 0;     //系数
    int maxPower = 0;        //最高幂
    int i;
    printf("请输入两个多项式，幂次和系数以空格分开，幂次从高到低最后一项是0次幂：\n");
    //输入累加求和
    do
    {
        scanf("%d %d", &power, &coefficient);
        if (power == 0)
        {
            polynomialIndex++;
        }
        if (power > maxPower)
        {
            maxPower = power;
        }
        arr[power] += coefficient;

    } while (polynomialIndex < 2);

    //输出结果
    for (i = maxPower; i > -1; i--)
    {
        if (arr[i] > 0)
        {
            if (i == 0)
            {
                printf("%d", arr[i]);
            }
            else
            {
                if (i == 1)
                {
                    printf("%dx", arr[i]);
                }
                else
                {
                    printf("%dx%d", arr[i], i);
                }
            }
        }
        //不是最后一项且下一项的系数大于0才拼接加号
        if (i > 0 && arr[i - 1] > 0)
        {
            printf("+");
        }
    }
    printf("\n");
}
