#include<stdio.h>

int main(){
	int x, y;
	printf("Enter First Number: ");
	scanf("%d", &x);
	printf("Enter Second Number: ");
	scanf("%d", &y);
	
	int i = 1, power = 1;
	
	power = power * x;
	
	printf("Value Of Power Variable Is: %d\n", power);
	
	++i;
	while(i <= y){
		printf("I Variable Is Smaller Than The Number: %d\n", y);
		break;
	}
	
	
	return 0;
}
