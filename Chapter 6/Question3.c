#include<stdio.h>

int main(){
	int salary, gross_sales, index = 8, i;
	int range[9] = {0};
	
	while(1){
		printf("Enter Gross Sales(Enter -1 To Exit): ");
		scanf("%d", &gross_sales);
		if(gross_sales == -1){
			break;
		}
		salary = 200 + 0.09 * gross_sales;
		if(salary >= 1000){
			range[index] += 1;
		}
		else if(salary >= 900 && salary < 1000){
			range[index - 1] += 1;
		}
		else if(salary >= 800 && salary < 900){
			range[index - 2] += 1;
		}
		else if(salary >= 700 && salary < 800){
			range[index - 3] += 1;
		}
		else if(salary >= 600 && salary < 700){
			range[index - 4] += 1;
		}
		else if(salary >= 500 && salary < 600){
			range[index - 5] += 1;
		}
		else if(salary >= 400 && salary < 500){
			range[index - 6] += 1;
		}
		else if(salary >= 300 && salary < 400){
			range[index - 7] += 1;
		}
		else{
			range[index - 8] += 1;
		}
	}
	
	for(i = 0; i < 9; i++){
		printf("At Index %d is: %d\n", i, range[i]);
	}
	
	return 0;
}
