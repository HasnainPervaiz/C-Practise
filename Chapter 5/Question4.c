#include<stdio.h>

int integerPower(int base, int exponent);

int main(){
	int base, exponent, ans;
	
	printf("Enter A Number As A Base: ");
	scanf("%d", &base);
	printf("Enter A Number As An Exponent: ");
	scanf("%d", &exponent);
	
	ans = integerPower(base, exponent);
	printf("The Answer Is: %d", ans);
	return 0;
}

int integerPower(int base, int exponent){
	int i, answer = 1;
	for(i = 1; i <= exponent; i++){
		answer = answer * base;
	}
	return answer;
}
