#include "reverseFunction.h"

void reverseNumber(){
	int a;
	int b; 
	
	printf("������һ����λ��������");
	scanf("%d",&a);
	// ��λ + ʮλ + ��λ	
	b = a / 100 + a % 100 / 10 * 10 + a % 10 * 100;
	printf("%d\n",b);
	
}

