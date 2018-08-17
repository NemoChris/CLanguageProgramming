#include "judgeIsPrimeNumber.h"

void judgePrimeNumberNumber(){
	int number = 0;
	int isPrimeNumber = 1;
	int middle = 0;
	printf("请输入一个整数：");	
	scanf("%d", &number);
	
	if(number == 1){
		isPrimeNumber = 0;		
	} else {
		int i = 2;
		middle = number/2;
		for(; i <= middle; i++){
			if(number % i == 0){
				isPrimeNumber = 0;
				break;
			}
		}		
	}
	
	if(isPrimeNumber == 1){
		printf("数字%d是一个素数", number);	
	} else {
		printf("数字%d不是一个素数", number);
	}
	
	
}
