#include "sumPrime.h"

void sumPrime()
{
	int j = 2;
	int i = 2;
	int middle = 0;
	int isPrimeNumber = 1;
	int index = 0;
	int sum = 0;
	int n, m;
	int isCalcRange = 0;//�Ƿ����һ����Χ�������ĺͣ����m==n ֻ������n ��������ֵ���ɣ���˵��ҽ���m>n ʱ�˱���ֵΪ1

	printf("������n��m�Կո���� 0<n<=m<200��\n");
	scanf("%d %d", &n, &m);
	isCalcRange = m > n;
	for (; j < 10000; j++)
	{
		middle = j / 2;
		isPrimeNumber = 1;
		i = 2;
		for (; i <= middle; i++)
		{
			if (j % i == 0)
			{
				isPrimeNumber = 0;
				break;
			}
		}

		if (isPrimeNumber == 1)
		{
			index++;

			if (index >= n)
			{
				if (index == m)
				{
					sum += j;
					break;
				} 
				else
				{
					sum += j;
				}												
			}

			
		}
	}
	printf("%d\n",sum);
}
