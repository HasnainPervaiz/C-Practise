#include<stdio.h>

void calculate_charge(int i, float h, float h1, float h2);
float input_hours();

int main(){
	float total_charges = 0, total_hours = 0, hour, hour1, hour2;
	int i, j;
	
//	printf("Enter The Number Of Hours first: ");
//		scanf("%f", &hour);
//		
//		printf("Enter The Number Of Hours first: ");
//		scanf("%f", &hour1);
//		
//		printf("Enter The Number Of Hours first: ");
//		scanf("%f", &hour2);
	hour = input_hours();
	hour1 = input_hours();
	hour2 = input_hours();
	
	printf("Car \t Hours \t\t Charge \n");
		
	for(i = 1; i <= 3; i++){
		calculate_charge(i, hour, hour1, hour2);
 	}
 	
	
	return 0;
}

void calculate_charge(int i, float h, float h1, float h2){
	float charge, extra_charge;
	if(h <= 3){
		charge = 2.00;
		printf("%d	%.1f	$%.2f\n", i, h, charge);	
	}
	else if(h > 3 && h < 24){
		extra_charge = (h - 3) * 0.5;
		charge = extra_charge + 2;
		printf("%d	%.1f	$%.2f\n", i, h1, charge);	
	}
	else if(h == 24){
		charge = 10;
		printf("%d	%.1f	$%.2f\n", i, h2, charge);	
	}
}

float input_hours(){
	float hour;
	printf("Enter Number Of Hours: ");
	scanf("%d", &hour);
	return hour;
}
