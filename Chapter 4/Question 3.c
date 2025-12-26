#include<stdio.h>

int main(){
	int num, i, number, sum = 0;
	printf("Enter A Number To Show How Many Numbers Are To Be Added: ");
	scanf("%d", &num);	
		
	for(i = 1; i <= num; i++){
		printf("Enter Number %d: ", i);
		scanf("%d", &number);
		sum = number + sum;
	}
	
	printf("The Sum Is: %d", sum);
	
	return 0;
}
