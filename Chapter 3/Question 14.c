#include<stdio.h>

int main(){
	int number, largest, i;
	printf("Enter Number 1: ");
	scanf("%d", &number);
	largest = number;	
	
	for(i = 1; i < 10; i++){
		printf("Enter Number %d: ", i +1);
		scanf("%d", &number);
		
			if(number > largest){
				largest = number;
			}
	}
	
	printf("Largest Value Is: %d", largest);
	
	return 0;
}
