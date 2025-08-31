#include<stdio.h>

int main(){
	int num1, num2;
	printf("Enter First Number: ");
	scanf("%d", &num1);
	printf("Enter Second Number: ");
	scanf("%d", &num2);
	
	if(num1 > num2){
		printf("%d Is Larger.", num1);
	}
	else if(num2 > num1){
		printf("%d Is Larger.", num2);
	}
	else{
		printf("These Numbers Are Equal.");
	}
	
	return 0;
}
