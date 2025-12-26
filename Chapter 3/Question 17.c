#include<stdio.h>

int main(){
	int num = 1;

	while(num <= 100){
		printf("*");
			if((num % 10) == 0){
				printf("\n");
			}
		num++;
	}	
	
//	for(num = 1;num <= 100;num++){
//		printf("*");
//			if((num % 10) == 0){
//				printf("\n");
//			}
//	}	
//	
	
	return 0;
}
