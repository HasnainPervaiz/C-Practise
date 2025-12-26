#include<stdio.h>

int main(){
	int account_number;
	float beginning, total_charges, total_credits, allowed, balance;
	while(1){
		printf("Enter Account Number(-1 To End): ");
		scanf("%d", &account_number);
			if(account_number == -1){
					return 0;
				}
		printf("Enter Beginnig Balance: ");
		scanf("%f", &beginning);
		printf("Enter Total Charges: ");
		scanf("%f", &total_charges);
		printf("Enter Total Credits: ");
		scanf("%f", &total_credits);
		printf("Enter Credit Limit: ");
		scanf("%f", &allowed);
		
		printf("Account Number: %d\n", account_number);
		printf("Credit Limit: %f\n", allowed);
		balance = beginning + total_charges - total_credits;
		printf("Balance: %f\n\n", balance);
			if(balance > beginning){
				printf("Credit Limit Exceeded.\n\n");
			}
	}
	
	
	
	return 0;
}
