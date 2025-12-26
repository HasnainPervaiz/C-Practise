#include<stdio.h>

int main(){
	int num = 10;
	int i, j;
	
	for(i = 1; i <= num; i++){
		for(j = num; j >= i; j--){
			printf("*");
		}
		printf("\n");
	}
	printf("\n\n");
	for(i = 1; i <= num; i++){
		for(j = 1; j <= i; j++){
			printf("*");
		}
		printf("\n");
	}
	printf("\n\n");
	for(i = 1; i <= num; i++){
		for(j = 1; j <= num; j++){
			if((i + j) <= num){
				printf(" ");
			}
			else{
				printf("*");
			}
		}
		printf("\n");
	}
		printf("\n\n");
	for(i = num; i >= 1; i--){
		for(j = num; j >= 1; j--){
			if((i + j) >= num){
				printf(" ");
			}
			else{
				printf("*");
			}
		}
		printf("\n");
	}
	
	return 0;
}
