#include "sumOfPolynomial.h"

void sumOfPolynomial(void)
{
    int arr[100] = {0};
    int polynomialIndex = 0; //Ϊ2ʱ��ֹѭ��
    int power = 0;           //�ݴ�
    int coefficient = 0;     //ϵ��
    int maxPower = 0;        //�����
    int i;
    printf("��������������ʽ���ݴκ�ϵ���Կո�ֿ����ݴδӸߵ������һ����0���ݣ�\n");
    //�����ۼ����
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

    //������
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
        //�������һ������һ���ϵ������0��ƴ�ӼӺ�
        if (i > 0 && arr[i - 1] > 0)
        {
            printf("+");
        }
    }
    printf("\n");
}
