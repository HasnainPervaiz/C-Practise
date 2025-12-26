#include<stdio.h>

int main(){
	int num; 
	for(num = 1; num <= 7; num++){
		printf("%d\t", num);
	}
	
	printf("\n");
	
	for(num = 3; num <= 23; num += 5){
		printf("%d\t", num);
	}
	
	printf("\n");
	
	for(num = 20; num >= -10; num -= 6){
		printf("%d\t", num);
	}
	
	printf("\n");
	
	for(num = 19; num <= 51; num += 8){
		printf("%d\t", num);
	}
	
	
	return 0;
}
