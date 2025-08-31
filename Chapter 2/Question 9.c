#include<stdio.h>

int main(){
	int num;
	printf("Enter A Number: ");
	scanf("%d", &num);
	
	
	if(num == 0){
		printf("Number Is 0.");	
	}
	else if((num % 2) == 0){
		printf("The Number %d Is Even.", num);
	}
	else{
		printf("The Number %d Is Odd.", num);
	}
	
	return 0;
}
