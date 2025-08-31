#include<stdio.h>

int main(){
	int num1, num2, num3;
	printf("Enter First Number: ");
	scanf("%d", &num1);
	printf("Enter Second Number: ");
	scanf("%d", &num2);
	printf("Enter Third Number: ");
	scanf("%d", &num3);
	
	int sum, average, product;
	sum = num1 + num2 + num3;
	average = (num1 + num2 + num3) / 3;
	product = num1 * num2 * num3;
	
	printf("Their Sum Is: %d\n", sum);
	printf("Their Average Is: %d\n", average);
	printf("Their Product Is: %d\n", product);
	
	if(num1 > num2 && num1 > num3){
		printf("%d Is The Largest.", num1);
	}
	else if(num2 > num1 && num2 > num3){
		printf("%d Is The Largest.", num2);
	}
	else{
		printf("%d Is The Largest.", num3);
	}
	
	
	return 0;
}
