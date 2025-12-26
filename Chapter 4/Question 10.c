#include<stdio.h>

int main(){
	int num = 1, i, product = 1;
	
	for(i = 1; i <= 5; i++){
		product = product * num;
		printf("Factorial Of %d Is: %d", num, product);
		num++;
		printf("\n");
	}
	
	
	return 0;
}
