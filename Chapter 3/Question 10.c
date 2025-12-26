#include<stdio.h>

int main(){
	float sales, salary;
	
	while(1){
		printf("Enter Sales In Dollars(-1 To End): ");
		scanf("%f", &sales);
			if(sales == -1){
				return 0;
			}
		salary = (sales * 0.09) + 200;
		
		printf("Salary Is: %.2f\n\n", salary);
	}
	
	
	
	return 0;
}
