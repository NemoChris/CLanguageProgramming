#include "rsConvert.h"

void convertRSInfo(){
	
	int rsCode = 0; 
	int sinals = 0; //信号强度 
	int redable = 0; //可辨度 
	int isValidRSCode = 1;
	
	printf("请输入一个信号报告两位整数，十位代表可辨度，个位代表信号强度，\n"
			"比如59表示Extremely strong signals, perfectly readable. :");

	scanf("%d", &rsCode);
	
	//用户输入校验  Begin
	if(rsCode <= 10){
		isValidRSCode = 0;
	}else if(rsCode > 100) {
		isValidRSCode = 0;
	}
	//用户输入校验  End
	
	if(isValidRSCode == 1){
		sinals = rsCode % 10;
		switch(sinals) {
			case 1: 
				printf("Faint signals, barely perceptible");
				break;
			case 2: 
				printf("Very weak signals");
				break;
			case 3: 
				printf("Weak signals");
				break;
			case 4: 
				printf("Fair signals");
				break;
			case 5: 
				printf("Fairly good signals");
				break;
			case 6: 
				printf("Good signals");
				break;
			case 7: 
				printf("Moderately strong signals");
				break;
			case 8: 
				printf("Strong signals");
				break;
			case 9: 
				printf("Extremely strong signals");
				break;
			default:
				printf("Error:Unown signals%d", sinals);
				break;
		}
		
		printf(",");
		
		redable = rsCode / 10;
		switch(redable) {
			case 1: 
				printf("Unreadable");
				break;
			case 2: 
				printf("Barely readable, occasional words distinguishable");
				break;
			case 3: 
				printf("Readable with considerable difficulty");
				break;
			case 4: 
				printf("Readable with practically no difficulty");
				break;
			case 5: 
				printf("Perfectly readable");
				break;			
			default:
				printf("Error:Unown readable%d", redable);
				break;
		}
		
		printf(".\n");
		
	} else {
		printf("信号必须是一个两位整数"); 
	}
	
}
