#include<stdio.h>

int main(){
	int balance, last_limit, new_limit, num, i, current_balance;
	
	for(i = 1; i <= 3; i++){
		printf("Enter Your Account Number: ");
		scanf("%d", &num);
		printf("Enter Your Credit Limit Before The Recession: ");
		scanf("%d", &last_limit);
		printf("Enter Your Current Balance: ");
		scanf("%d", &current_balance);
		printf("\n\n");
		
		new_limit = last_limit / 2;
		printf("Current Status!\n");
		printf("Account Number: %d \n", num);
		printf("Old Credit Limit: %d \n", last_limit);
		printf("New Credit Limit: %d \n", new_limit);
		printf("Current Balance: %d \n", current_balance);
			if(current_balance > new_limit){
				printf("Exceeds New Credit Limit.\n\n");
			}
			else{
				printf("Within New Credit Limit.\n\n");	
			}		
	}	
	return 0;
}
