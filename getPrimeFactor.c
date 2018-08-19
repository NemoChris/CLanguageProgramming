#include "getPrimeFactor.h"

int isPrime(int number)
{
	int isPrimeNumber = 1;
	int middle = 0;

	if (number == 1)
	{
		isPrimeNumber = 0;
	}
	else
	{
		int i = 2;
		middle = number / 2;
		for (; i <= middle; i++)
		{
			if (number % i == 0)
			{
				isPrimeNumber = 0;
				break;
			}
		}
	}

	return isPrimeNumber;
}

int getPrimeNumber(int index)
{
	int isPrimeNumber = 1;
	int middle = 0;
	int primeNumber = 2;
	int i, j;
	int currentIndex = 0;

	for (j = 2; j < 100000; j++)
	{
		//��������״̬
		isPrimeNumber=1;
		middle = j / 2;
		for (i = 2; i <= middle; i++)
		{
			if (j % i == 0)
			{
				isPrimeNumber = 0;
				break;
			}
		}
		if (isPrimeNumber)
		{
			primeNumber = j;
			currentIndex++;
		}
		if (index == currentIndex)
		{
			break;
		}
	}
	return primeNumber;
}

void getPrimeFactor(void)
{
	int number = 0;
	int currentPrimeNum = 2; //��ǰ����
	int primeIndex = 1;		 //��ǰ��������ţ���1��ʼ1,2,3...

	printf("������һ����Χ��[2,100000]������");
	scanf("%d", &number);

	if (isPrime(number))
	{
		printf("%d=%d", number, number);
	}
	else
	{
		printf("%d=", number);
		do
		{
			while (number % currentPrimeNum != 0 && currentPrimeNum < number)
			{
				primeIndex++;
				currentPrimeNum = getPrimeNumber(primeIndex);
			}
			number /= currentPrimeNum;
			printf("%dx", currentPrimeNum);
			//��numberֵ�ı�����״̬
			currentPrimeNum = 2;
			primeIndex = 1;
		} while (!isPrime(number));
		printf("%d", number);
	}
}
