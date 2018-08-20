#include "biggerThanAvg.h"

void biggerThanAvg(void)
{
	int x;
	double sum = 0;
	double avg = 0;
	int cnt = 0;
	int number[100];
	printf("请输入一些整数以-1结束：");
	scanf("%d", &x);
	

	while (x != -1)
	{
		number[cnt] = x;
		sum += x;
		cnt++;
		scanf("%d", &x);
	}

	if (cnt > 0)
	{
		avg = sum / cnt;
		printf("%f\n", avg);
		for (int i = 0; i < cnt; i++)
		{

			if (number[i] > avg)
			{
				printf("%d\n", number[i]);
			}
		}
	}
}
