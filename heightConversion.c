#include "heightConversion.h"

int heightConvert(){
	printf("��ֱ�������ߵ�Ӣ�ߺ�Ӣ�磬"
	"������\"5 7\"��ʾ5Ӣ��7Ӣ�磺");
	
	double foot = 0;
	double inch = 0;
	
	scanf("%lf %lf",&foot,&inch); 
	printf("�����%f�ס�\n",((foot + inch / 12) * 0.3048));
}
