# include "CompareTwoNumber.h"

int getMaxInTwoNumber(){
	int a = 0;
	int	b = 0;
	int	max = 0;
		
	printf("����������������");
	scanf("%d %d", &a, &b);
	
	if(a>b){
		max = a;
	} else {//b>=a
		max = b;
	}
	
	printf("����Ǹ���%d\n", max);
	
	return max;
}
