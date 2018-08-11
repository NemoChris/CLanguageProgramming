#include "reverseFunction.h"

void reverseNumber(){
	int a;
	int b; 
	
	printf("请输入一个三位的整数：");
	scanf("%d",&a);
	// 个位 + 十位 + 百位	
	b = a / 100 + a % 100 / 10 * 10 + a % 10 * 100;
	printf("%d\n",b);
	
}

