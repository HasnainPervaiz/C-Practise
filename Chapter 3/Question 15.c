#include<stdio.h>

int main(){
	int number, i, j;
	printf("Enter Value Of One Side Of Square(From 1-20): ");
	scanf("%d", &number);
	
	if(number > 20 || number < 1){
		printf("Invalid Value!");
		return 0;
	}
	
	for(i = 1; i <= number; i++){
		for(j = 1; j <= number; j++){
			printf("*");
		}
		printf("\n");
	}
		
	return 0;
}
