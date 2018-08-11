# include "CompareTwoNumber.h"

int getMaxInTwoNumber(){
	int a = 0;
	int	b = 0;
	int	max = 0;
		
	printf("请输入两个整数：");
	scanf("%d %d", &a, &b);
	
	if(a>b){
		max = a;
	} else {//b>=a
		max = b;
	}
	
	printf("大的那个是%d\n", max);
	
	return max;
}
