#include "oddAndevenStatics.h"

void staticsOddAndEven(){

	int number = 0;
	int odd = 0;
	int even = 0;
	
	printf("请输入一系列整数范围在0-100000，输入-1表示结束输入：");
	scanf("%d", &number);
	while(number != -1) {		
		if(number < 0 || number > 100000){ //"||"表示 在"||"左边表达式或者右边的表达式任意一个成立，也就是说当number<0 或者 number>100000时表达式成立 
			printf("您输入的数字%d，超出范围，不会被统计。\n", number);
		} else if (number % 2 == 0){
			even++;
		} else {
			odd++;
		}
		scanf("%d", &number);
	}
	printf("%d %d", odd, even);
}

//odd 2 
//even 4
//9 3 4 2 5 7  -1
//4 2
