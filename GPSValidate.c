#include "GPSValidate.h"


#include <stdio.h>
#include <string.h>
 
/* ʮ��������ת��Ϊʮ������ */
long hexToDec(char *source);
 
/* ����ch�ַ���sign�����е���� */
int getIndexOfSigns(char ch);
 

/* ʮ��������ת��Ϊʮ������ */
long hexToDec(char *source)
{
    long sum = 0;
    long t = 1;
    int i, len;
 
    len = strlen(source);
    for(i=len-1; i>=0; i--)
    {
        sum += t * getIndexOfSigns(*(source + i));
        t *= 16;
    }  
 
    return sum;
}
 
/* ����ch�ַ���sign�����е���� */
int getIndexOfSigns(char ch)
{
    if(ch >= '0' && ch <= '9')
    {
        return ch - '0';
    }
    if(ch >= 'A' && ch <='F') 
    {
        return ch - 'A' + 10;
    }
    if(ch >= 'a' && ch <= 'f')
    {
        return ch - 'a' + 10;
    }
    return -1;
}

int calculateGPSCode(char gpsStr[],int arrCount){
	if(gpsStr==NULL) 
		return 0;
		
	int gpsCode=0;
	int isBeginCalc = 0; 
	int isFirstCalc = 1;
	//��ʽ������sizeof(gpsSrt)�ĳ���ʼ��Ϊ8����ʵ���޹� 
	//for(int i=0;i<sizeof(gpsStr)/sizeof(gpsStr[0]);i++){
	for(int i=0;i<arrCount;i++){
		if(gpsStr[i]=='$'){ //��ʼ�������ֵ
			isBeginCalc=1;
		}else if(gpsStr[i]=='*' || gpsStr[i]=='\0'){//�������ֵ���� 
			break;
		}else{
			if(isBeginCalc==1){
				if(isFirstCalc==1){
					gpsCode = (int)gpsStr[i];
					isFirstCalc=0;
					//printf("%c",gpsStr[i]);					
				}else{
					gpsCode = gpsCode ^	(int)gpsStr[i];
					//printf("^%c",gpsStr[i]);					
				}								
			}
		}
	}
	gpsCode = gpsCode%65536;
	return gpsCode;
}

void getGPSCode(char *gpsCode ,const char* gpsStr,int arrCount){	
	
	if(gpsStr==NULL) 
		return;
			
	int j=0;
	int isBeginGetCode=0;	
	for(int i=0;i<arrCount;i++){
		if(gpsStr[i] == '*'){//*����ΪУ���� 
			isBeginGetCode=1;
		}
		else if(gpsStr[i] == '\0'){
			gpsCode[j]='\0';
			break;
		}
		else{
			if(isBeginGetCode == 1){
				gpsCode[j] = gpsStr[i];
				j++;
			}
		}
	}		
}


void getUTCTime(char *outChar,const char *gpsChar,int length){
	if(gpsChar == NULL)
		return;
			
	int filedIndex=0;
	int j=0; 
	for(int i=0;i<length;i++){
		if(gpsChar[i] == ','){
			filedIndex++; 
		}
		else {
			if(filedIndex == 1) {				
				outChar[j]=gpsChar[i];
				j++;				
			} else if(filedIndex > 1){
				outChar[j] = '\0';
				break;
			}
		} 
	}		
} 

int isContainsGPSInfo(char *gpsChar,int length){
	if(gpsChar == NULL)
		return 0;
		
	int isContain=0;
	int filedIndex=0;
	for(int i=0;i<length;i++){
		if(gpsChar[i] == ','){
			filedIndex++; 
		}
		else {
			if(filedIndex == 2) {
				if(gpsChar[i] == 'A'){
					isContain = 1;
					break;
				}
			} else if(filedIndex > 2){
				isContain = 0;
				break;
			}
		} 
	}
	
	return isContain;
} 


void getBeiJingTime(char *outChar,char *utcTimeChar){
	if(utcTimeChar == NULL)
		return;
	char utcPrefix[10];		
	strtok(utcTimeChar,"."); 	
	
	if(utcTimeChar != NULL){
		int utcPrefixInt=0;
		sscanf(utcTimeChar,"%d",&utcPrefixInt);
		int beiJingTimeInt = utcPrefixInt + 80000; 
		char tmp[10];
		sprintf(tmp,"%d",beiJingTimeInt);
		int j=0;
		int colonIndexFirst = 2;
		int colonIndexSecond = 4;		
		
		for(int i=0;i<strlen(tmp);i++,j++){
			if(i==0){
				if(beiJingTimeInt<100000) {//5λ 
					outChar[j]='0';
					outChar[++j]=tmp[i];
					colonIndexFirst--;
					colonIndexSecond--;
				}else{
					outChar[j]=tmp[i];
				}				
			 } else if(i==colonIndexFirst || i==colonIndexSecond) {
			 	outChar[j]=':';
			 	outChar[++j]=tmp[i];
			 }
			  else if(i==strlen(tmp)-1) {
			 	outChar[j]=tmp[i];
			 	outChar[++j]='\0';
			 }
			 else{
			 	outChar[j]=tmp[i];
			 }
		}	
		
	}
} 

void validateGPS(){
	char str[500];
	printf("Please input a GPS text:");
	gets(str);
	
	
	while(strcmp(str,"END")!=0){
		printf("%s\n",str);
		int length = strlen(str);//sizeof(str)/sizeof(str[0]);
		int gpsCode = calculateGPSCode(str,length);		
		printf("Correct gpsCode is %d\n",gpsCode);
		char realGPSCode[20];
		getGPSCode(realGPSCode,str,length);		
		long realCodeLong = hexToDec(realGPSCode);
		printf("Real GPSCode is %d\n",realCodeLong);
		
		if(realCodeLong == (long)gpsCode){
			int isContainsGPS = isContainsGPSInfo(str,length);
			printf("isContainGPS:%d \n",isContainsGPS);
			if(isContainsGPS == 1){
				char utcTime[20];
				getUTCTime(utcTime,str,length);
				char beiJingTime[10];
				getBeiJingTime(beiJingTime,utcTime);
				printf("utcTime:%s\n",utcTime); 
				printf("Success!\n");	
				printf("BeiJingTime is %s\n",beiJingTime);				
			}			
			break;
		}else {
			printf("Invalid GPS reenter:");
			gets(str);
		}				
	}
	
			 
}
