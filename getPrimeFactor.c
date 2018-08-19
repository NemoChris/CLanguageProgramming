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
		//重置素数状态
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
	int currentPrimeNum = 2; //当前素数
	int primeIndex = 1;		 //当前素数的序号，从1开始1,2,3...

	printf("请输入一个范围在[2,100000]的整数");
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
			//当number值改变重置状态
			currentPrimeNum = 2;
			primeIndex = 1;
		} while (!isPrime(number));
		printf("%d", number);
	}
}
