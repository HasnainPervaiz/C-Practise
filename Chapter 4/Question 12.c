#include<stdio.h>

int main(){
	int product_num, quantity;
	float total;
	
	printf("Enter The Product Number: ");
	scanf("%d", &product_num);
		if(product_num > 5 || product_num < 1){
			printf("Invalid Product Number!");
			return 0;
		}
	printf("Enter The Quantity Sold: ");
	scanf("%d", &quantity);
	
	switch(product_num){
		case 1:
			total = quantity * 2.98;
			break;
		case 2:
			total = quantity * 4.50;
			break;
		case 3:
			total = quantity * 9.98;
			break;
		case 4:
			total = quantity * 4.49;
			break;
		case 5:
			total = quantity * 6.87;
			break;
	}
	
	printf("Total Retail Value Of All Products Sold Is: $%f\n", total);
		
	return 0;
}
