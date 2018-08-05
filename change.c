#include "change.h"
/* This is a program for finding change.
 *	2018-07-22 12:50:43 auth:AlfredHuang 
*/ 
int findingChange(){
	const int AMOUNT = 100;
	int change = 0,
		price = 0;
	
	
	printf("请输入金额（元）:");
	scanf("%d",&price);
	change = AMOUNT - price;
	printf("找您%d元。\n",change);
	return change;
}
