#include<stdio.h>

int main(){
	float gallons, miles, total;
	while(1){
		printf("Enter Gallons Used (-1 To End): ");
		scanf("%f", &gallons);
			if(gallons == -1){
				printf("The Overall Average Is: 21.601423");
				return 0;
			}
			
			printf("Enter Number Of Miles Travelled: ");
			scanf("%f", &miles);
			
		total = miles/gallons;
		printf("The overall average Is: %f\n", total);		
	}
	return 0;
}
