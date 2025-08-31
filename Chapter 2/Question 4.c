#include<stdio.h>

int main(){
	int num1, num2;
	printf("Enter First Number: ");
	scanf("%d", &num1);	
	printf("Enter Second Number: ");
	scanf("%d", &num2);
	
	int sum, product, difference, quotient, remainder;
	
	sum = num1 + num2;
	product = num1 * num2;
	difference = num1 - num2;
	quotient = num1 / num2;
	remainder = num1 % num2;
	
	printf("Their Sum Is: %d\n", sum);
	printf("Their Product Is: %d\n", product);
	printf("Their Difference Is: %d\n", difference);
	printf("Their Quotient Is: %d\n", quotient);
	printf("Their Remainder Is: %d\n", remainder);
	
	return 0;
}
