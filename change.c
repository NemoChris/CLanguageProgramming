#include "change.h"
/* This is a program for finding change.
 *	2018-07-22 12:50:43 auth:AlfredHuang 
*/ 
int findingChange(){
	int price=0;
	int change=0;
	
	printf("Please enter the amount:");
	scanf("%d",&price);
	change = 100 - price;
	printf("%d dollars,please\n",change);
	return change;
}
