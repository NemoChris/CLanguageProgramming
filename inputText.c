#include "inputText.h"

void inputALineOfText(){
	char str[500];
	printf("Please input a line of text:");
	gets(str);
	//I have a dream.
	//printf("%s",str);
	
//	for(int i;i<sizeof(str)/sizeof(str[0]);i++){
//		printf("'%c',",str[i]);
//		if(str[i]=='\0'){
//			break;
//		}
//	}
	printf("Your input text's word length respectively are:\n");
	int wordCount=0;
	for(int i=0;i<sizeof(str)/sizeof(str[0]);i++){
		//printf("'%c',",str[i]);
		if(str[i]==' '){//单词边界 
			if(wordCount>0){
				printf("%d ",wordCount);
			}				
			wordCount = 0;//重新计数 
		}
		else if(str[i]=='.'){
			printf("%d",wordCount);			
			break;
		}
		else if(str[i]=='\0'){
			printf("%d",wordCount);			
			break;
		}else{
			wordCount++; 
		}
	}
	 
}
