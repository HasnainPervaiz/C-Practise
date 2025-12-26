#include<stdio.h>

int main(){
	int num, remainder, ans, q;
	printf("Enter A Number: ");
	scanf("%d", &num);
	
	if(num < 100){
		printf("Number Should Contain At least Three Values.");
		return 0;
	}
	
	ans = 0;
	q = num;
	while(q != 0){
		remainder = q % 10;
		ans = ans * 10 + remainder;
		q = q / 10;
	}
	
	if(ans == num){
		printf("The Given Number Is A Palindrome.");
	}
	else{
		printf("The Given Number Is Not A Palindrome.");
	}
	
	return 0;
}
