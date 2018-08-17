#include "calcEigenvalue.h"

void getEigenvalue(){
	int number = 0;
	int digit = 0;
	int tmp = 0;
	int eigenvalue = 0;
	int isEvenTmp = 0;
	int isEvenDigit = 0;
	int squareOfTwo = 1; //2的0次方为1 
	
	printf("请输入一个整数范围在0-1000000：");
	scanf("%d", &number);
	while(number < 0 || number > 1000000 ) {
		printf("%d已超出范围，请重新输入：", number);
		scanf("%d", &number);	
	}
	
	while(number != 0){
		digit++;
		tmp = number % 10;
		isEvenTmp = tmp % 2 == 0;
		isEvenDigit = digit % 2 == 0;
		if(isEvenTmp == isEvenDigit){
			eigenvalue += squareOfTwo;
		}
		number /= 10;
		squareOfTwo *= 2; 
	}
	
	printf("%d", eigenvalue);
}

