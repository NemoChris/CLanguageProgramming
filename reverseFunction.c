#include "reverseFunction.h"

void reverseNumber(){
	int inNum;
	int reverNum; 
	
	printf("Please enter the positive ingeter:");
	scanf("%d",&inNum);
	if(inNum<=0){
		printf("The input must be positive ingeter!");
		return;
	}
	
	reverNum = inNum%10 * 100 + inNum%100/10*10 + inNum/100;
	printf("The reverse number is %d",reverNum);
	
}

void reverseString(){
	char ch[] = "A righteous man may have many troubles";
	int len = sizeof(ch)/sizeof(char);
	//printf("len is %d",len);
	
	for(int i=len-1;i>=0;i--){
		printf("%c",ch[i]);
	}
}

//void swapChar(char* a,char* b){
//	char tmp=char
//}
