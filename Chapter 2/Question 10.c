#include<stdio.h>

int main(){
	int num1, num2;
	printf("Enter First Number: ");
	scanf("%d", &num1);
	printf("Enter Second Number: ");
	scanf("%d", &num2);
	
	if((num1 % num2) == 0){
		printf("%d Is A Multiple Of %d.", num1, num2);
	}
	else{
		printf("%d Is Not A Multiple Of %d.", num1, num2);
	}
	
	return 0;
}
