#include<stdio.h>

int main(){
	int x, y, z;
	printf("Enter First Number: ");
	scanf("%d", &x);
	printf("Enter Second Number: ");
	scanf("%d", &y);
	printf("Enter Third Number: ");
	scanf("%d", &z);
	
	int product;
	product = x * y * z;
	printf("The Product Is: %d", product);	
	
	
	return 0;
}
