#include<stdio.h>

typedef struct bank_account{
	int accountNumber;
	char name[100];
	float balance;
}banks;

int main(){
	banks bank;
	int num = 0;
	float amount = 0;
	
	while(1){
		printf("\t\t\t\t\t-----(Bank Account Management)-----\n\n");
		printf("Enter Your Account Number(-1 To Exit): ");
		scanf("%d", &bank.accountNumber);
		
		if(bank.accountNumber == -1){
			break;
		}
		printf("Enter Your Name: ");
		scanf("%s", bank.name);
		
		printf("Enter Your Current Balance: ");
		scanf("%f", &bank.balance);
		
		printf("Enter 1 For Deposit And 2 For Withdrawl: ");
		scanf("%d", &num);
		
		if(num == 1){
			printf("Enter The Amount That You Want To Deposit: ");
			scanf("%f", &amount);
			bank.balance += amount;
			printf("Current Balance: %.2f\n\n", bank.balance);
		}
		else{
			printf("Enter The Amount That You Want To Withdraw: ");
			scanf("%d", &amount);
			if(amount > bank.balance){
				printf("Value Entered Exceeds Current Balance. Try Again!\n\n");
				continue;
			}
			else{
				bank.balance -= amount;
				puts("Value Withdrawed Successfully!");
				printf("Current Balance: %.2f\n\n", bank.balance);
			}
		}
	}
	
	return 0;
}
