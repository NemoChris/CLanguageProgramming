#include "TimeConvert.h"
void timeBJTToUTC(){
	
	const int TIMELAG = 800; //北京时间和世界协调时间的时差
	const int TIMEOFDAY = 2400; //一天的时间24制在程序中的表示 
	int bjtTime = 0;
	int utcTime = 0;
	/*时间有效性状态码，
	0：有效 	
	1：无效，小时超出0~23范围 ，
	2：无效，分钟超出0~59范围 	
	*/
	int validCode = 0; 
	int hours = 0;
	int minutes = 0;
	
	printf("请输入北京时间,用一个四位正整数表示，"
			"如1124表示11点24分，7表示0点7分：");

	scanf("%d", &bjtTime);
	
	//校验用户输入时间的正确性   Begin 
		
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
	//校验用户输入时间的正确性   End
	
	if(validCode == 0) {//有效则进行时间转换处理
		utcTime = bjtTime - TIMELAG;
		if(utcTime < 0) {
			utcTime = -(utcTime + TIMEOFDAY);
			printf("%d（负数代表UTC前一天的时间，比如-2300表示UTC时间前一天23点整）\n", utcTime);
		} else {
			printf("%d\n", utcTime);
		} 	
	} else if(validCode == 1) {	
		printf("输入的时间无效：小时超出范围，请输入0~23内的小时\n");
	} else if(validCode == 2) {	
		printf("输入的时间无效：分钟超出范围，请输入0~59内的分钟\n");
	} else {//当新增了错误码，但忘记新增else-if分支时提示，帮助排错。 
		printf("输入的时间无效：错误码%d，请联系管理员\n",validCode);
	}
		
}
