#include "TimeConversion.h"
// �����һ��ʱ��κ͵ڶ���ʱ��֮ǰ��ʱ������3��10�ֺ�1��30�� ��ʱ���Ϊ1��Сʱ40���� 
int timeConvert(){
	int hour1, minute1;
	int hour2, minute2;
	
	printf("�������һ��ʱ�䣬�ֱ�����Сʱ�ͷ���."
			"����\"3 10\"��ʾ3��10�֣�");
	scanf("%d %d", &hour1, &minute1);
	printf("������ڶ���ʱ�䣬�ֱ�����Сʱ�ͷ���."
			"����\"1 30\"��ʾ1��30�֣�");
	scanf("%d %d", &hour2, &minute2);
	
	int t1 = hour1 * 60 + minute1;
	int t2 = hour2 * 60 + minute2;
	
	int t= t1 - t2;
	
	printf("ʱ�����%dСʱ%d�֡�",t / 60, t % 60);
}
