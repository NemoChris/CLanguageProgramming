#include "guessGame.h"

void guess(){
	
	srand(time(0));
	int number = rand() % 100 + 1;
	int count = 0;
	int a = 0;
	
	printf("���Ѿ������һ��1��100֮�������");
	do{
		printf("������1��100֮�������");
		scanf("%d", &a) ;
		count ++;
		if( a > number){
			printf("��µ�������");
		} else if(a < number){
			printf("��µ���С��");
		}
	} while (a != number);
	
	printf("̫���ˣ�������%d�ξͲȵ��˴𰸡�\n", count);
	
}
