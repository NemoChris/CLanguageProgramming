#include "TimeConvert.h"
void timeBJTToUTC(){
	
	const int TIMELAG = 800; //����ʱ�������Э��ʱ���ʱ��
	const int TIMEOFDAY = 2400; //һ���ʱ��24���ڳ����еı�ʾ 
	int bjtTime = 0;
	int utcTime = 0;
	/*ʱ����Ч��״̬�룬
	0����Ч 	
	1����Ч��Сʱ����0~23��Χ ��
	2����Ч�����ӳ���0~59��Χ 	
	*/
	int validCode = 0; 
	int hours = 0;
	int minutes = 0;
	
	printf("�����뱱��ʱ��,��һ����λ��������ʾ��"
			"��1124��ʾ11��24�֣�7��ʾ0��7�֣�");

	scanf("%d", &bjtTime);
	
	//У���û�����ʱ�����ȷ��   Begin 
		
	if(validCode == 0) {
		hours = bjtTime / 100;
		if(hours < 0){
			validCode = 1;
		} else if(hours > 23){
			validCode = 1;
		}
	}
	
	if(validCode == 0) {
		minutes = bjtTime % 100;
		if(minutes < 0){
			validCode = 2;
		} else if(minutes > 59){
			validCode = 2;
		}
	}
	//У���û�����ʱ�����ȷ��   End
	
	if(validCode == 0) {//��Ч�����ʱ��ת������
		utcTime = bjtTime - TIMELAG;
		if(utcTime < 0) {
			utcTime = -(utcTime + TIMEOFDAY);
			printf("%d����������UTCǰһ���ʱ�䣬����-2300��ʾUTCʱ��ǰһ��23������\n", utcTime);
		} else {
			printf("%d\n", utcTime);
		} 	
	} else if(validCode == 1) {	
		printf("�����ʱ����Ч��Сʱ������Χ��������0~23�ڵ�Сʱ\n");
	} else if(validCode == 2) {	
		printf("�����ʱ����Ч�����ӳ�����Χ��������0~59�ڵķ���\n");
	} else {//�������˴����룬����������else-if��֧ʱ��ʾ�������Ŵ� 
		printf("�����ʱ����Ч��������%d������ϵ����Ա\n",validCode);
	}
		
}
