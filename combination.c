#include "combination.h"
void combination()
{
	int zs = 20;
	int one = 1;
	int two = 2;
	int five = 5;
	int exist = 0;

	for (int x = 1; x <= (zs - two - five) / one; x++)
	{
		for (int y = 1; y <= (zs - one - five) / two; y++)
		{
			for (int z = 1; z <= (zs - one - two) / five; z++)
			{
				if (x * one + y * two + z * five == zs)
				{
					printf("������%d��һ�Ǽ�%d�����Ǽ�%d����ǵõ�2Ԫ\n", x, y, z);
					exist=1;
					break;
				}
			}
			
			if (exist) {
				break;
			}			
		}
		
		if (exist) {
			break;
		}
		
	}
}

