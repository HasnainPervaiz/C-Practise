#include<stdio.h>

int main(){
	int hours;
	float rate, salary;
	
	while(1){
		printf("Enter Number Of Hours Worked(-1 To End): ");
		scanf("%d", &hours);
			if(hours == -1){
				return 0;
			}
		printf("Enter Hourly Rate Of The Worked($00.00): ");
		scanf("%f", &rate);
		
		salary = rate * hours;
		
		printf("Salary Is: $%.2f\n\n", salary);
	}
	
	
	
	return 0;
}
