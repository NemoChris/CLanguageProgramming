#include "calcEigenvalue.h"

void getEigenvalue(){
	int number = 0;
	int digit = 0;
	int tmp = 0;
	int eigenvalue = 0;
	int isEvenTmp = 0;
	int isEvenDigit = 0;
	int squareOfTwo = 1; //2��0�η�Ϊ1 
	
	printf("������һ��������Χ��0-1000000��");
	scanf("%d", &number);
	while(number < 0 || number > 1000000 ) {
		printf("%d�ѳ�����Χ�����������룺", number);
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

