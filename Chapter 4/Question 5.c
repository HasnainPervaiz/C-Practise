#include<stdio.h>

int main(){
	int num, product = 1;
	
	for(num = 1; num <= 15; num += 2){
		product = product * num;
	}
	
	printf("Product Of Odd Numbers From 1-15 Is: %d", product);
	
	
	return 0;
}
