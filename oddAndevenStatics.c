#include "oddAndevenStatics.h"

void staticsOddAndEven(){

	int number = 0;
	int odd = 0;
	int even = 0;
	
	printf("������һϵ��������Χ��0-100000������-1��ʾ�������룺");
	scanf("%d", &number);
	while(number != -1) {		
		if(number < 0 || number > 100000){ //"||"��ʾ ��"||"��߱��ʽ�����ұߵı��ʽ����һ��������Ҳ����˵��number<0 ���� number>100000ʱ���ʽ���� 
			printf("�����������%d��������Χ�����ᱻͳ�ơ�\n", number);
		} else if (number % 2 == 0){
			even++;
		} else {
			odd++;
		}
		scanf("%d", &number);
	}
	printf("%d %d", odd, even);
}

//odd 2 
//even 4
//9 3 4 2 5 7  -1
//4 2
