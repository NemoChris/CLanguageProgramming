#include "judgeIsPrimeNumber.h"

void judgePrimeNumberNumber(){
	int number = 0;
	int isPrimeNumber = 1;
	int middle = 0;
	printf("������һ��������");	
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
		printf("����%d��һ������", number);	
	} else {
		printf("����%d����һ������", number);
	}
	
	
}
