#include "change.h"
/* This is a program for finding change.
 *	2018-07-22 12:50:43 auth:AlfredHuang 
*/ 
int findingChange(){
	const int AMOUNT = 100;
	int change = 0,
		price = 0;
	
	
	printf("�������Ԫ��:");
	scanf("%d",&price);
	change = AMOUNT - price;
	printf("����%dԪ��\n",change);
	return change;
}
