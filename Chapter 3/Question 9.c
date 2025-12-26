#include<stdio.h>

int main(){
	float principal, rate, days, interest;
	while(1){
		printf("Enter Loan Principal(-1 To End): ");
		scanf("%f", &principal);
			if(principal == -1){
				return 0;
			}
		printf("Enter Interest Rate: ");
		scanf("%f", &rate);
		printf("Enter Term Of The Loan In Days: ");
		scanf("%f", &days);
		
		interest = principal * rate * days / 365;
		
		printf("The interest charge Is: $%.2f\n\n", interest);
	}		
	
	
	return 0;
}
