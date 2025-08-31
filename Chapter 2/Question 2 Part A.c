#include<stdio.h>

int main(){
	int num1, num2, num3;
	printf("Enter First Number: ");
	scanf("%d", &num1);
	printf("Enter Second Number: ");
	scanf("%d", &num2);
	printf("Enter Third Number: ");
	scanf("%d", &num3);
	
	int product;
	product = num1 * num2 * num3;
	printf("Their Product Is %d", product);
		
	return 0;
}
