#include "TimeConversion.h"
// 计算第一个时间段和第二个时间之前的时间差，例如3点10分和1点30分 的时间差为1个小时40分钟 
int timeConvert(){
	int hour1, minute1;
	int hour2, minute2;
	
	printf("请输入第一个时间，分别输入小时和分钟."
			"输入\"3 10\"表示3点10分：");
	scanf("%d %d", &hour1, &minute1);
	printf("请输入第二个时间，分别输入小时和分钟."
			"输入\"1 30\"表示1点30分：");
	scanf("%d %d", &hour2, &minute2);
	
	int t1 = hour1 * 60 + minute1;
	int t2 = hour2 * 60 + minute2;
	
	int t= t1 - t2;
	
	printf("时间差是%d小时%d分。",t / 60, t % 60);
}
