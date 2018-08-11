#include "rsConvert.h"

void convertRSInfo(){
	
	int rsCode = 0; 
	int sinals = 0; //�ź�ǿ�� 
	int redable = 0; //�ɱ�� 
	int isValidRSCode = 1;
	
	printf("������һ���źű�����λ������ʮλ����ɱ�ȣ���λ�����ź�ǿ�ȣ�\n"
			"����59��ʾExtremely strong signals, perfectly readable. :");

	scanf("%d", &rsCode);
	
	//�û�����У��  Begin
	if(rsCode <= 10){
		isValidRSCode = 0;
	}else if(rsCode > 100) {
		isValidRSCode = 0;
	}
	//�û�����У��  End
	
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
		printf("�źű�����һ����λ����"); 
	}
	
}
