#include<stdio.h>

int main(){
	int num = 5, i, j;
	
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
	
	
	
	
	return 0;
}
